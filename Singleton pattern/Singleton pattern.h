
// ����ģʽ����������̵�����п���ͨ������һ��ȫ�ֱ�����ʵ�֣�����������������̽�ϵ�
// ����У�Ҳ����ͨ��һ��ȫ�ֱ���ʵ�֡����ǵ������˴�����������ʱ������ͨ������ģʽ��ʵ��
// ����ά��һ��static�ĳ�Ա��������¼���Ψһ�Ķ���ʵ����ͨ���ṩһ��static�Ľӿ���������
// Ψһ��ʵ��
// ���������Ա�ʵ���������Խ�Ĭ�Ϲ��캯������Ϊprotected��private

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>

using std::cout;
using std::endl;

class Singleton
{
public:
	static Singleton* Instance();
protected:
	Singleton();
private:
	static Singleton* _instance;
};

#endif // _SINGLETON_H_