#pragma once

#include <iostream>
#include <queue>

//����ģʽ һ�ֶ�����Ϊ��ģʽ��������ģʽ������ģʽ
//��һ�������װΪһ������,�Ӷ������ǿ����ò�ͬ������Կͻ����в�����,
//�������Ŷӻ��¼������־,�Լ�֧�ֿɳ����Ĳ���.
//���������ߺͽ�������ȫ����,�������������֮��û��ֱ�����ù�ϵ,
//��������Ķ���ֻ��Ҫ֪����η�������,������֪������������

class CHandleClientProtocol
{
public:
	void addMoney()
	{
		std::cout << "���ӽ��" << std::endl;
	}

	void addDiamond()
	{
		std::cout << "������ʯ" << std::endl;
	}

	void addEquip()
	{
		std::cout << "��װ��" << std::endl;
	}

	void addLevel()
	{
		std::cout << "����" << std::endl;
	}
};

//�������
class CAbstractCommand
{
public:
	virtual void handle() = 0;
};

//����ʵ�� �������ӽ������
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

//��������
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
