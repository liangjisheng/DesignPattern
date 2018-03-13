
#ifndef _ABSTRACTPRODUCT_H_
#define _ABSTRACTPRODUCT_H_

#include <stdio.h>

class AbstractProduct
{
public:
	AbstractProduct();
	virtual ~AbstractProduct();

	virtual void operation() = 0;
};

class ProductA : public AbstractProduct
{
public:
	ProductA();
	virtual ~ProductA();

	void operation();
};

class ProductB : public AbstractProduct
{
public:
	ProductB();
	virtual ~ProductB();

	void operation();
};

#endif // _ABSTRACTPRODUCT_H_