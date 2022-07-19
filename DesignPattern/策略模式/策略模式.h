#pragma once

#include <iostream>

//����ģʽ������һϵ�е��㷨,
//����ÿһ���㷨��װ����,����ʹ���ǻ������໥�滻,
//����ģʽ���㷨������ʹ�����Ŀͻ��������仯

//������������
class CWeaponStratey
{
public:
	virtual void useWeapon() = 0;
};

//ذ��
class CKnife : public CWeaponStratey
{
public:
	void useWeapon() override
	{
		std::cout << "ʹ��ذ��" << std::endl;
	}
};

//AK47
class CAK47 : public CWeaponStratey
{
public:
	void useWeapon() override
	{
		std::cout << "ʹ��AK47" << std::endl;
	}
};

class CCharacter
{
public:
	void setWeapon(CWeaponStratey* pWeapon)
	{
		m_pWeapon = pWeapon;
	}

	void useWeapon()
	{
		if (nullptr != m_pWeapon)
		{
			m_pWeapon->useWeapon();
		}
		else
		{
			std::cout << "û������" << std::endl;
		}
	}

private:
	CWeaponStratey* m_pWeapon = nullptr;
};
