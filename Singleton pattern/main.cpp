
#include "Singleton pattern.h"

int main()
{
	Singleton* sgn = Singleton::Instance();
	if (sgn)
		cout << "create ok" << endl;
	else 
		cout << "create failed" << endl;

	Singleton* another = Singleton::Instance();
	if (another != sgn)
		cout << "create ok" << endl;
	else
		cout << "create failed" << endl;

	system("pause");
	return 0;
}
