#include<iostream>
#include<string>
using namespace std;
//分类
//参数分类
//类型分类
class Person {
public:
	Person() {
		cout << "构造函数的调用" << endl;
	}
	//参数分类
	Person(int a) {
		cout << "有参的构造函数的调用" << endl;
	}
	//类型分类
	Person(const Person &p) {

	}
	~Person() {
		cout << "祈构函数的调用" << endl;
	}
};

void test01() {
	//括号法
	Person s;//默认构造函数调用
	Person s2(10);//有参
	Person s3(s2);//拷贝
	//注意事项1
	//调用默认构造函数时，不要加()
	//Person p1() 编译器会认为是一个函数的声明，不会认为在创建对象

	//显示法
	Person p1;
	Person p2 = Person(10);//有参构造 Person(10)为匿名对象，当前行执行完就清除
	Person p3 = Person(p2);
	//注意事项2
	//不要利用拷贝构造函数 初始化匿名对象 编译器会认为对象的申明

	//隐式转化法
	Person c1 = 10;
	Person c2 = c1;
}

int main() {
	test01();
	system("pause");
	return 0;
}
