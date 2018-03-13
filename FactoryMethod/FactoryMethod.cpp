
#include "FactoryMethod.h"

using std::cout;
using std::endl;

int main()
{
	Factory* factory = new FactoryA();
	SingleCore* product = factory->CreateSingleCore();
	product->Show();

	delete factory;
	factory = NULL;
	delete product;
	product = NULL;

	factory = new FactoryB();
	product = factory->CreateSingleCore();
	product->Show();
	delete factory;
	factory = NULL;
	delete product;
	product = NULL;

	system("pause");
	return 0;
}