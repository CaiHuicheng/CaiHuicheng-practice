#include<iostream>
using namespace std;

int main() {
	//1、引用必须初始化
	int a = 10;
	//int &b; //错误，必须要初始化
	int &b = a;
	//2、引用一旦初始化，就不可修改
	int c = 20;

	//b = c;//赋值操作，而不是更改引用


	system("pause");
	return 0;
}