#include<iostream>
#include<string>
using namespace std;
//��ģ���г�Ա����������ʱ��
//��ģ���г�Ա�����ڵ��õ�ʱ��Ŵ���

template <class T>
class Myclass
{
public:
	T obj;
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};
class Person1
{
public:
	void showPerson1() {
		cout << "Person1" << endl;
	}
};

class Person2
{
public:
	void showPerson2() {
		cout << "Person2" << endl;
	}
};

void test01() {
	Myclass<Person1>p;
	p.func1();
	//p.func2(); //��Ա�����ڵ���ʱ����
}

int main() {

	test01();
	system("pause");
	return 0;
}