#include<iostream>
#include<string>
using namespace std;

//类模板与继承

//1、当子类继承父类是一个模板时，子类在声明的时候，要指定父类的类型
template <class T>
class Base
{
public:
	T m;
};
//class Son :public Base //错误，必须知道父类中T的类型，才可以继承给子类
class Son :public Base<char>
{

};
void test01() {
	Son s1;
}

//2、如果想灵活使用父类中的T类型,子类也需要变成模板
template<class T1,class T2>
class Son2:public Base<T2>
{
	Son2() {
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
public:
	T1 obj;
};
void test02() {
	Son2<int, char> s2;
}
int main() {

	test02();

	system("pause");
	return 0;
}