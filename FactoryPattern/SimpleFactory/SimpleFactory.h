
#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

#include <stdio.h>
#include "AbstractProduct.h"

class AbstractFactory
{
public:
	AbstractFactory();
	virtual ~AbstractFactory();

	virtual AbstractProduct* createProduct(int type) = 0;
};

class SimpleFactory : public AbstractFactory
{
public:
	SimpleFactory();
	virtual ~SimpleFactory();

	virtual AbstractProduct* createProduct(int type);
};

#endif // _SIMPLEFACTORY_H_
