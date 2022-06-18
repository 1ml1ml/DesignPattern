#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

//������ģʽ

//�Ѿ�д�õķ��� ������������
void print(int nV1, int nV2)
{
	std::cout << nV1 << "--" << nV2 << std::endl;
}

//����Ŀ�� ��Ҫ�������������ʲô���Ľӿ�
class CTarget
{
public:
	virtual void operator()(int nVal) = 0;
};

//������	����ʵ�ֵ�������ʹ�÷������Խ���һ�������ĵ���
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
