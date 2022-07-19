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

//ÅÝ¿§·È
class CCoffee : public CDrinkTemplete
{
public:
	void boilWater() override
	{
		std::cout << "Öó¿ªË®" << std::endl;
	}

	void brew() override
	{
		std::cout << "³åÅÝ¿§·È" << std::endl;
	}

	void pourInCup() override
	{
		std::cout << "µ¹Èë±­ÖÐ" << std::endl;
	}

	void addSomething() override
	{
		std::cout << "Ìí¼ÓÌÇºÍÅ£ÄÌ" << std::endl;
	}
};

//ÅÝ²è
class CTea : public CDrinkTemplete
{
public:
	void boilWater() override
	{
		std::cout << "Öó¿ªË®" << std::endl;
	}

	void brew() override
	{
		std::cout << "³åÅÝ²èÒ¶" << std::endl;
	}

	void pourInCup() override
	{
		std::cout << "µ¹Èë±­ÖÐ" << std::endl;
	}

	void addSomething() override
	{
		std::cout << "Ìí¼ÓÄûÃÊ" << std::endl;
	}
};
