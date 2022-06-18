#pragma once

#include <iostream>

//外观模式
//将复杂的子系统抽象到同一个接口进行管理, 
//外界只需要通过此接口与子类系统进行交互, 
//而不必要直接与复杂子类系统进行交互

class CSubSystem1
{
public:
	void run()
	{
		std::cout << "子系统1启动" << std::endl;
	}
};

class CSubSystem2
{
public:
	void run()
	{
		std::cout << "子系统2启动" << std::endl;
	}
};

class CSubSystem3
{
public:
	void run()
	{
		std::cout << "子系统3启动" << std::endl;
	}
};

//主系统的运行需要3个子系统先启动
class CSystem
{
public:
	void run()
	{
		std::cout << "主系统启动" << std::endl;
	}
};

//外观类	供外部调用
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
