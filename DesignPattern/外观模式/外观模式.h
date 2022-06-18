#pragma once

#include <iostream>

//���ģʽ
//�����ӵ���ϵͳ����ͬһ���ӿڽ��й���, 
//���ֻ��Ҫͨ���˽ӿ�������ϵͳ���н���, 
//������Ҫֱ���븴������ϵͳ���н���

class CSubSystem1
{
public:
	void run()
	{
		std::cout << "��ϵͳ1����" << std::endl;
	}
};

class CSubSystem2
{
public:
	void run()
	{
		std::cout << "��ϵͳ2����" << std::endl;
	}
};

class CSubSystem3
{
public:
	void run()
	{
		std::cout << "��ϵͳ3����" << std::endl;
	}
};

//��ϵͳ��������Ҫ3����ϵͳ������
class CSystem
{
public:
	void run()
	{
		std::cout << "��ϵͳ����" << std::endl;
	}
};

//�����	���ⲿ����
class CFacade
{
public:
	CFacade() : 
	m_pSubSystem1(new CSubSystem1), m_pSubSystem2(new CSubSystem2), m_pSubSystem3(new CSubSystem3), m_pSystem(new CSystem) {}

public:
	void run()
	{
		m_pSubSystem1->run();
		m_pSubSystem2->run();
		m_pSubSystem3->run();
		m_pSystem->run();
	}

private:
	CSubSystem1* m_pSubSystem1 = nullptr;
	CSubSystem2* m_pSubSystem2 = nullptr;
	CSubSystem3* m_pSubSystem3 = nullptr;
	CSystem* m_pSystem = nullptr;
};
