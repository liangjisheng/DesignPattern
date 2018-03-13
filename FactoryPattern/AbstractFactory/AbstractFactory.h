
#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

#include <stdio.h>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProductA* createProductA() = 0;
	virtual AbstractProductB* createProductB() = 0;
};

class Factory1 : public AbstractFactory
{
public:
	Factory1();
	virtual ~Factory1();

	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();
};

class Factory2 : public AbstractFactory
{
public:
	Factory2();
	virtual ~Factory2();

	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();
};

#endif // _SIMPLEFACTORY_H_