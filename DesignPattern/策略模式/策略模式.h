#pragma once

#include <iostream>

//策略模式定义了一系列的算法,
//并将每一个算法封装起来,而且使他们还可以相互替换,
//策略模式让算法独立于使用它的客户而独立变化

//抽象武器策略
class CWeaponStratey
{
public:
	virtual void useWeapon() = 0;
};

//匕首
class CKnife : public CWeaponStratey
{
public:
	void useWeapon() override
	{
		std::cout << "使用匕首" << std::endl;
	}
};

//AK47
class CAK47 : public CWeaponStratey
{
public:
	void useWeapon() override
	{
		std::cout << "使用AK47" << std::endl;
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
			std::cout << "没有武器" << std::endl;
		}
	}

private:
	CWeaponStratey* m_pWeapon = nullptr;
};
