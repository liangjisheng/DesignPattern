
// ����ģʽ��֤һ����ֻ��һ��ʵ�����ṩһ����������ȫ�ַ��ʵ�
// ��ʵ�������г���ģ�鹲��

#include <iostream>

using std::cout;
using std::endl;

class Signalleton
{
public:
	static Signalleton* get_instance();
	void set_var(int var);
	int get_var();
private:
	Signalleton();
	virtual ~Signalleton();
	static Signalleton *signal;
	int _var;
};

Signalleton* Signalleton::signal = NULL;


Signalleton::Signalleton() { _var = 0; }

Signalleton* Signalleton::get_instance()
{
	if(NULL == signal)
		signal = new Signalleton();
	return signal;
}

Signalleton::~Signalleton()
{
	delete signal;
	signal = NULL;
}

int Signalleton::get_var() { return _var; }

void Signalleton::set_var(int var) { _var = var; }


int main()
{
	Signalleton *s = Signalleton::get_instance();
	s->set_var(1);
	cout << s->get_var() << endl;

	system("pause");
	return 0;
}

