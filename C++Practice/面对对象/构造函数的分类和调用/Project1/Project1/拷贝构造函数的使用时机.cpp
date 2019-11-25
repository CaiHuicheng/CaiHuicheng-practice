#include<iostream>
#include<string>
using namespace std;
//1、使用一个已经创建完毕的对象来初始化一个新的对象
//2、值传递的方式给函数参数传值
//3、值方式返回局部对象

class Person {
public:
	Person() {
		cout << "默认" << endl;
	}
	~Person() {
		cout << "祈构" << endl;
	}
	Person(int age1) {
		cout << "有参" << endl;
		age = age1;
	}
	Person(const Person &p) {
		cout << "拷贝" << endl;
		age = p.age;
	}
	int age;
};

void test01() {
	Person p1(20);
	Person p2(p1);
	cout << p2.age << endl;
}
void doWork(Person p) {
	/*Person p1;
	return p1;*/
}

void test02() {
	Person p;
	doWork(p);
}

Person doWork02() {
	Person p1;
	return p1;
}
void test03() {
	Person p = doWork02();
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
