#include<iostream>
using namespace std;

class C1 {
	int m_A;
};

struct C2 {
	int m_A;
};

int main() {

	//class	 默认权限 私有的 class C1
	//C1 c1;
	//c1.m_A = 100;
	//struct 默认权限 共有的 struct C2
	C2 c2;
	c2.m_A = 100;
	cout << c2.m_A << endl;
	system("pause"); 
	return 0;
}