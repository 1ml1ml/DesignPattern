#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

//适配器模式

//已经写好的方法 接受两个参数
void print(int nV1, int nV2)
{
	std::cout << nV1 << "--" << nV2 << std::endl;
}

//适配目标 需要将上述方适配成什么样的接口
class CTarget
{
public:
	virtual void operator()(int nVal) = 0;
};

//适配器	具体实现的适配器使该方法可以接受一个参数的调用
class CAdapter : public CTarget
{
public:
	void bind(int nVal)
	{
		m_nBind = nVal;
	}

public:
	void operator()(int nVal) override
	{
		print(nVal, m_nBind);
	}

private:
	int m_nBind = 0;
};
