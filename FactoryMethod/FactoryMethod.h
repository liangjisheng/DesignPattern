
// �򵥹�����Ҫ���ڲ��жϲ�Ʒ���ͣ����Ҫ�����µ����ͣ�����Ҫ�޸Ĺ����ࡣ���Υ���˿��ŷ��
// ԭ�����ʵ��(�ࡢģ�顢����)������չ�����������޸ġ����ǹ�������ģʽ�����ˡ���ν��������
// ģʽ����ָ����һ�����ڴ�������Ľӿڣ����������ʵ�����Ǹ��ࡣFactory Methodʹһ�����ʵ��
// ���ӳٵ���������
// Ӧ�ó���: �ϸ����ӵ������������˵Ĳ���׬�˲���Ǯ�����Ǿ����ڿ���һ������ר����������B�ͺ�
// �ĵ��ˣ���ԭ���Ĺ���ר����������A�ͺŵĵ��ˡ���ʱ���ͻ�Ҫ�������Һù���������ҪA�ͺŵĺˣ�
// ����A����Ҫ;������B����Ҫ,���ڲ�Ҫ���߹�������Ҫʲô�ͺŵĴ���������

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