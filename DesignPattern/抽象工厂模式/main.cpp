#include <iostream>
#include "¹¤³§Àà.h"

int main(void)
{
	AbstractFruit* pFruit{ nullptr };

	pFruit = ChinaFactory().creatApple();
	pFruit->showName();
	delete pFruit;

	pFruit = ChinaFactory().creatPear();
	pFruit->showName();
	delete pFruit;

	pFruit = USAFactory().creatApple();
	pFruit->showName();
	delete pFruit;

	pFruit = USAFactory().creatPear();
	pFruit->showName();
	delete pFruit;

	return 0;
}