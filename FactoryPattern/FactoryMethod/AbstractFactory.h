
#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

#include <stdio.h>
#include "AbstractProduct.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProduct* createProduct() = 0;
};

class FactoryA : public AbstractFactory
{
public:
	FactoryA();
	virtual ~FactoryA();

	AbstractProduct* createProduct();
};

class FactoryB : public AbstractFactory
{
public:
	FactoryB();
	virtual ~FactoryB();

	AbstractProduct* createProduct();
};

#endif // _SIMPLEFACTORY_H_