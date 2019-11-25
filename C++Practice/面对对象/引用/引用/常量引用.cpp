#include<iostream>
using namespace std;

//打印数据函数
void show(const int &val) {
    //val = 1000;
	cout << val << endl;
}

int main() {
	//常量引用

	//使用场景：用来修饰形参，防止误操作

	//int a = 10;

	//加上const之后 编译器将代码修改  int temp = 10;const int & ref = temp;
	//const int & ref = 10;//引用必须引一块合法的内存空间
	//ref = 20;//加入const之后变为只读，不可以修改

	int a = 100;
	show(a);

	cout << "a=" << a << endl;
	system("pause");
	return 0;
}