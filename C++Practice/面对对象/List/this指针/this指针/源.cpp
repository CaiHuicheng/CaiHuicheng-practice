#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;
	}
	int age;
	Person &PersonAddage(Person &p) {//不加& 时永远为20 因为拷贝时拷贝数据 加&返回的时拷贝的数据地址
		this->age += p.age;
		return *this;
	}
};

//1、解决名称冲突问题
void test01() {
	Person p1(18);
	cout << p1.age << endl;
}

//2、返回对象本身用*this
void test02() {
	Person p1(10);
	Person p2(10);
	p2.PersonAddage(p1).PersonAddage(p1);
	cout << p2.age << endl;
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
