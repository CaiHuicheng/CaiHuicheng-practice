#include<iostream>
using namespace std;

//ÒıÓÃ´«µİ
void mySwap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


int main() {


	int a = 20;
	int b = 10;
	mySwap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}