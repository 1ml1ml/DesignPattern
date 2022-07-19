#pragma once

#include <iostream>

class CDrinkTemplete
{
public:
	virtual void boilWater() = 0;
	virtual void brew() = 0;
	virtual void pourInCup() = 0;
	virtual void addSomething() = 0;
};

//�ݿ���
class CCoffee : public CDrinkTemplete
{
public:
	void boilWater() override
	{
		std::cout << "��ˮ" << std::endl;
	}

	void brew() override
	{
		std::cout << "���ݿ���" << std::endl;
	}

	void pourInCup() override
	{
		std::cout << "���뱭��" << std::endl;
	}

	void addSomething() override
	{
		std::cout << "����Ǻ�ţ��" << std::endl;
	}
};

//�ݲ�
class CTea : public CDrinkTemplete
{
public:
	void boilWater() override
	{
		std::cout << "��ˮ" << std::endl;
	}

	void brew() override
	{
		std::cout << "���ݲ�Ҷ" << std::endl;
	}

	void pourInCup() override
	{
		std::cout << "���뱭��" << std::endl;
	}

	void addSomething() override
	{
		std::cout << "�������" << std::endl;
	}
};
