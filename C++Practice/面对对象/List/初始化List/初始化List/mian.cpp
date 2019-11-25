#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	//初始化列表
	Person(int a,int b,int c) :a(a), b(b), c(c) {

	}
	int a;
	int b;
	int c;
};

int main() {
	Person p(1,1,0);
	cout << p.a << p.b << p.c << endl;
	system("pause");
	return 0;
}
