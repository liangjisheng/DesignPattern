
// ����ģʽ���ڴ�����ģʽ�����¿��Է�Ϊ3��:�򵥹���ģʽ����������ģʽ�ͳ��󹤳�ģʽ��
// �򵥹���ģʽ��������Ҫ�ص������Ҫ�ڹ����������жϣ��Ӷ�������Ӧ�Ĳ�Ʒ����������
// �Ĳ�Ʒʱ������Ҫ�޸Ĺ����ࡣ
// Ӧ�ó���:��һ�������������˵ĳ��ң���ֻ��һ���������ܹ����������ͺŵĴ������ˡ�
// �ͻ���Ҫʲô���Ĵ������ˣ�һ��Ҫ��ʾ�ظ�����������

#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

#include <iostream>

enum CTYPE { COREA, COREB };

class SingleCore
{
public:
	virtual void Show() = 0;
};

// ����A
class SingleCoreA : public SingleCore
{
public:
	virtual void Show() { std::cout << "SingleCoreA" << std::endl; }
};

// ����B
class SingleCoreB : public SingleCore
{
public:
	virtual void Show() { std::cout << "SingleCoreB" << std::endl; }
};

// Ψһ�Ĺ������������������ͺŵĴ������ˣ����ڲ��ж�
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