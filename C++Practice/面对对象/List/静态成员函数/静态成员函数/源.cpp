#include<iostream>
#include<string>
using namespace std;
static int a;
class Person {
public:
	//静态成员函数
	static void func() {
		a = 100;//静态成员函数可以访问 静态成员变量
		//b = 200;//静态成员函数 不可访问 非成员变量，无法区分是那个对象的
		cout << "静态函数调用" << endl;
	}
};


void test01() {
	//1、通过对象调用
	Person p;
	p.func();
	//2、通过类名访问
	Person::func();//私有的访问不到
}

int main() {
	test01();
	system("pause");
	return 0;
}
