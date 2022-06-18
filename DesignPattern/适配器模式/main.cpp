#include "ÊÊÅäÆ÷Ä£Ê½.h"

int main(void)
{
	srand(time(0));
	srand(rand());

	std::vector<int> vec(10, 0);
	for (int nI = 0; nI < 10; nI++)
	{
		vec[nI] = rand();
	}

	CAdapter adapter;
	adapter.bind(rand());

	std::for_each(vec.begin(), vec.end(), adapter);

	getchar();
	return 0;
}