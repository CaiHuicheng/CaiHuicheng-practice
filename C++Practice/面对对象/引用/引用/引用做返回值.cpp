#include<iostream>
using namespace std;

//引用做函数的返回值

//1、不要返回局部变量的引用
int& test01() {
	int a = 10;
	return a;
}
//2、函数的调用可以作为左值

int& test02() {
	static int a = 10;
	return a;
}

int main() {

	//int &ref = test01();
	//cout << "ref=" << ref << endl;//第一次结果正确，因为编译器做了保留
	//cout << "ref=" << ref << endl;//第二次结果错误，因为a的内存已经释放


	int &ref = test02();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	test02() = 1000;//test02()返回的值是引用，这个函数的调用可以作为左值  a的地址的值 = 1000
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}