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
		std::cout << "苹果" << std::endl;
	}
};

class AbstractPear : public AbstractFruit
{
public:
	void showName() override
	{
		std::cout << "鸭梨" << std::endl;
	}
};

class ChinaApple : public AbstractApple
{
public:
	void showName() override
	{
		std::cout << "中国苹果" << std::endl;
	}
};

class ChinaPear : public AbstractPear
{
public:
	void showName() override
	{
		std::cout << "中国鸭梨" << std::endl;
	}
};

class USAApple : public AbstractApple
{
public:
	void showName() override
	{
		std::cout << "美国苹果" << std::endl;
	}
};

class USAPear : public AbstractPear
{
public:
	void showName() override
	{
		std::cout << "美国鸭梨" << std::endl;
	}
};
