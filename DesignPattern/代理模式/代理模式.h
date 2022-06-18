#pragma once

#include <string>
#include <iostream>
#include <queue>

//代理模式 代理的存在是为了保护被代理的类
//代理与实际类拥有相同基类 相同供外部调用的接口

//共同基类
class CBase
{
public:
	virtual	~CBase(){}

public:
	virtual void print(const std::string& str) = 0;
};

//服务器
class CSever : public CBase
{
public:
	void print(const std::string& str) override
	{
		std::cout << str << std::endl;
	}
};

//代理
class CAgent : public CBase
{
public:
	CAgent() : m_pSever(new CSever) {}

public:
	void print(const std::string& str) override
	{
		//将需要请求的信息放入缓冲队列 防止服务器因访问量过大 崩溃
		m_queueBuffer.push(str);
	}

private:
	//由代理自己判断何时向服务器发送缓冲区的数据
	void timerPrint()
	{
		if (false == m_queueBuffer.empty())
		{
			m_pSever->print(m_queueBuffer.front());
			m_queueBuffer.pop();
		}
	}

private:
	CSever* m_pSever = nullptr;
	std::queue<std::string> m_queueBuffer;	//缓冲队列
};
