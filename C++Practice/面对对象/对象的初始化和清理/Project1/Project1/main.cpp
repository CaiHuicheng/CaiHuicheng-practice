#include<iostream>
#include<string>
using namespace std;
//对象的初始化和清理
//1、构造函数 进行初始化
// 2、祈构函数
class Person {
public:
	Person() {
		cout << "初始化" << endl;
	}
	~Person() {
		cout << "清除" << endl;
	}
};
void test01() {
	Person P;
}

int main() {
	test01();
	Person p;//不会调用祈构函数  还没到项目结束进程
	system("pause");
	return 0;
}
