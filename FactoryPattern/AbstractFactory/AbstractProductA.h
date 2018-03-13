
#ifndef _ABSTRACTPRODUCTA_H_
#define _ABSTRACTPRODUCTA_H_

#include <stdio.h>

class AbstractProductA
{
public:
	AbstractProductA();
	virtual ~AbstractProductA();

	virtual void operationA() = 0;
};

class ProductA_1 : public AbstractProductA
{
public:
	ProductA_1();
	virtual ~ProductA_1();

	virtual void operationA();
};

class ProductA_2 : public AbstractProductA
{
public:
	ProductA_2();
	virtual ~ProductA_2();

	virtual void operationA();
};

#endif // _ABSTRACTPRODUCTA_H_