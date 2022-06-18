#pragma once

class CSingletonLazy
{
public:
	static CSingletonLazy* getInstance()
	{
		return &ins;
	}

private:
	static CSingletonLazy ins;
};

