#pragma once

#include "²úÆ·Àà.h"

class AbstractFactory
{
public:
	virtual AbstractFruit* creatApple() = 0;
	virtual AbstractFruit* creatPear() = 0;
};

class ChinaFactory : public AbstractFactory
{
public:
	AbstractFruit* creatApple() override
	{
		return new ChinaApple;
	}

	AbstractFruit* creatPear() override
	{
		return new ChinaPear;
	}
};

class USAFactory : public AbstractFactory
{
public:
	AbstractFruit* creatApple() override
	{
		return new USAApple;
	}

	AbstractFruit* creatPear() override
	{
		return new USAPear;
	}
};
