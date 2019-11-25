#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showPerson();
	T1 m_Name;
	T2 m_age;
};
//构造函数的类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age) {
	this->m_Name = name;
	this->m_age = age;
}
//成员函数的类外实现
template<class T1, class T2>
void Person<T1,T2>::showPerson()
{
	cout << this->m_Name<<this->m_age << endl;
}

void test01() {
	Person<string, int> p("Tom", 19);
	p.showPerson();
}

int main() {

	test01();
	system("pause");
	return 0;
}