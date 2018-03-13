
// 简单工厂需要在内部判断产品类型，如果要增加新的类型，就需要修改工厂类。这就违反了开放封闭
// 原则：软件实体(类、模块、函数)可以扩展，但不可以修改。于是工厂方法模式出现了。所谓工厂方法
// 模式，是指定义一个用于创建对象的接口，让子类决定实例化那个类。Factory Method使一个类的实例
// 化延迟到了其子类
// 应用场景: 上个例子的生产处理器核的产家赚了不少钱，于是决定在开设一个工厂专门用来生产B型号
// 的单核，而原来的工厂专门用来生产A型号的单核。这时，客户要做的是找好工厂，比如要A型号的核，
// 就找A工厂要;否则找B工厂要,不在不要告诉工厂具体要什么型号的处理器核了

#ifndef _FACTORYMETHOD_H_
#define _FACTORYMETHOD_H_

#include <iostream>

class SingleCore
{
public:
	virtual void Show() = 0;
};

class SingleCoreA : public SingleCore
{
public:
	virtual void Show() { std::cout << "SingleCoreA" << std::endl; }
};

class SingleCoreB : public SingleCore
{
public:
	virtual void Show() { std::cout << "SingleCoreB" << std::endl; }
};


class Factory
{
public:
	virtual SingleCore* CreateSingleCore() = 0;
};

class FactoryA : public Factory
{
public:
	virtual SingleCore* CreateSingleCore() { return new SingleCoreA(); }
};

class FactoryB : public Factory
{
public:
	virtual SingleCore* CreateSingleCore() { return new SingleCoreB(); }
};

#endif // _FACTORYMETHOD_H_