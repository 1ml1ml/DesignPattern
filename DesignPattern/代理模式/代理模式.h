#pragma once

#include <string>
#include <iostream>
#include <queue>

//����ģʽ ����Ĵ�����Ϊ�˱������������
//������ʵ����ӵ����ͬ���� ��ͬ���ⲿ���õĽӿ�

//��ͬ����
class CBase
{
public:
	virtual	~CBase(){}

public:
	virtual void print(const std::string& str) = 0;
};

//������
class CSever : public CBase
{
public:
	void print(const std::string& str) override
	{
		std::cout << str << std::endl;
	}
};

//����
class CAgent : public CBase
{
public:
	CAgent() : m_pSever(new CSever) {}

public:
	void print(const std::string& str) override
	{
		//����Ҫ�������Ϣ���뻺����� ��ֹ����������������� ����
		m_queueBuffer.push(str);
	}

private:
	//�ɴ����Լ��жϺ�ʱ����������ͻ�����������
	void timerPrint()
	{
		if (false == m_queueBuffer.empty())
		{
			m_pSever->print(m_queueBuffer.front());
			m_queueBuffer.pop();
		}
	}

private:
	CSever* m_pSever = nullptr;
	std::queue<std::string> m_queueBuffer;	//�������
};
