
// 单例模式，在面向过程的设计中可以通过创建一个全局变量来实现，在面向对象和面向过程结合的
// 设计中，也可以通过一个全局变量实现。但是当遇到了纯粹的面向对象时，这能通过单例模式来实现
// 类中维护一个static的成员变量来记录这个唯一的对象实例，通过提供一个static的接口来获得这个
// 唯一的实例
// 单例不可以被实例化，可以将默认构造函数声明为protected或private

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