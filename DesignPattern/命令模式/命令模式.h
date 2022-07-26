#pragma once

#include <iostream>
#include <queue>

//命令模式 一种对象行为型模式又名动作模式或事务模式
//将一个请求封装为一个对象,从而让我们可以用不同的请求对客户进行参数话,
//对请求排队或记录请求日志,以及支持可撤销的操作.
//将请求发送者和接收者完全解耦,发送者与接收者之间没有直接引用关系,
//发送请求的对象只需要知道如何发送请求,而不必知道如何完成请求

class CHandleClientProtocol
{
public:
	void addMoney()
	{
		std::cout << "增加金币" << std::endl;
	}

	void addDiamond()
	{
		std::cout << "增加钻石" << std::endl;
	}

	void addEquip()
	{
		std::cout << "穿装备" << std::endl;
	}

	void addLevel()
	{
		std::cout << "升级" << std::endl;
	}
};

//命令处理类
class CAbstractCommand
{
public:
	virtual void handle() = 0;
};

//具体实现 处理增加金币命令
class CAddMoneyCommand : public CAbstractCommand
{
public:
	CAddMoneyCommand(CHandleClientProtocol* pProtocol) : 
		m_pProtocol(pProtocol)
	{}

public:
	void handle() override
	{
		if (nullptr != m_pProtocol)
			m_pProtocol->addMoney();
	}

private:
	CHandleClientProtocol* m_pProtocol = nullptr;
};

//服务器端
class CServer
{
public:
	void addCommand(CAbstractCommand* pCommand)
	{
		m_qCommand.push(pCommand);
	}

	void startCommand()
	{
		while (!m_qCommand.empty())
		{
			m_qCommand.front()->handle();
			m_qCommand.pop();
		}
	}
private:
	std::queue<CAbstractCommand*> m_qCommand;
};
