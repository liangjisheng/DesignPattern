
#ifndef	_ABSTRACTPRODUCTB_H_
#define _ABSTRACTPRODUCTB_H_

#include <stdio.h>

class AbstractProductB
{
public:
	AbstractProductB();
	virtual ~AbstractProductB();

	virtual void operationB() = 0;
};

class ProductB_1 : public AbstractProductB
{
public:
	ProductB_1();
	virtual ~ProductB_1();

	virtual void operationB();
};

class ProductB_2 : public AbstractProductB
{
public:
	ProductB_2();
	virtual ~ProductB_2();

	virtual void operationB();
};

#endif // _ABSTRACTPRODUCTB_H_