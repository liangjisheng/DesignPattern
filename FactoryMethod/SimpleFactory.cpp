
#include "SimpleFactory.h"

using std::cout;
using std::endl;

int main()
{
	Factory* factory = new Factory();
	SingleCore* singlecore = factory->CreateSingleCore(COREA);
	singlecore->Show();

	delete singlecore;
	singlecore = NULL;

	singlecore = factory->CreateSingleCore(COREB);
	singlecore->Show();

	delete factory;
	factory = NULL;
	delete singlecore;
	singlecore = NULL;

	system("pause");
	return 0;
}