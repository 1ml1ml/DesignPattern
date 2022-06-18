#pragma once

#include <iostream>

class AbstractFruit
{
public:
	virtual ~AbstractFruit() {}

public:
	virtual void showName() = 0;
};

class AbstractApple : public AbstractFruit
{
public:
	void showName() override
	{
		std::cout << "ƻ��" << std::endl;
	}
};

class AbstractPear : public AbstractFruit
{
public:
	void showName() override
	{
		std::cout << "Ѽ��" << std::endl;
	}
};

class ChinaApple : public AbstractApple
{
public:
	void showName() override
	{
		std::cout << "�й�ƻ��" << std::endl;
	}
};

class ChinaPear : public AbstractPear
{
public:
	void showName() override
	{
		std::cout << "�й�Ѽ��" << std::endl;
	}
};

class USAApple : public AbstractApple
{
public:
	void showName() override
	{
		std::cout << "����ƻ��" << std::endl;
	}
};

class USAPear : public AbstractPear
{
public:
	void showName() override
	{
		std::cout << "����Ѽ��" << std::endl;
	}
};
