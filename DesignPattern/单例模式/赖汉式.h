#pragma once

#include <mutex>

class CSingletonHungry
{
public:
	static volatile CSingletonHungry* getInstance()
	{
		if (nullptr == sm_pIns)
		{
			sm_mutex.lock();
			if (nullptr == sm_pIns)
			{
				sm_pIns = new CSingletonHungry;
			}
			sm_mutex.unlock();
		}
		return sm_pIns;
	}

private:
	static volatile CSingletonHungry* sm_pIns;
	static std::mutex sm_mutex;
};

volatile CSingletonHungry* CSingletonHungry::sm_pIns = nullptr;
