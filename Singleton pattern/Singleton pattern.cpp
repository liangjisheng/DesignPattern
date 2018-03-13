
#include "Singleton pattern.h"

Singleton* Singleton::_instance = NULL;

Singleton::Singleton() { cout << "Singleton..." << endl; }

Singleton* Singleton::Instance() 
{
	if (!_instance)
		_instance = new Singleton();
	return _instance;
}