
// 工厂模式属于创建型模式，大致可以分为3类:简单工厂模式、工厂方法模式和抽象工厂模式。
// 简单工厂模式，它的主要特点就是需要在工厂类中做判断，从而创造相应的产品。当增加新
// 的产品时，就需要修改工厂类。
// 应用场景:有一家生产处理器核的厂家，它只有一个工厂，能够生产两种型号的处理器核。
// 客户需要什么样的处理器核，一定要显示地告诉生产工厂

#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

#include <iostream>

enum CTYPE { COREA, COREB };

class SingleCore
{
public:
	virtual void Show() = 0;
};

// 单核A
class SingleCoreA : public SingleCore
{
public:
	virtual void Show() { std::cout << "SingleCoreA" << std::endl; }
};

// 单核B
class SingleCoreB : public SingleCore
{
public:
	virtual void Show() { std::cout << "SingleCoreB" << std::endl; }
};

// 唯一的工厂，可以生产两种型号的处理器核，在内部判断
class Factory
{
public:
	SingleCore* CreateSingleCore(CTYPE ctype)
	{
		if (ctype == COREA)
			return new SingleCoreA();
		else if (ctype == COREB)
			return new SingleCoreB();
		else
			return NULL;
	};
};

#endif // _SIMPLEFACTORY_H_