#include<iostream>
using namespace std;

//�����������ķ���ֵ

//1����Ҫ���ؾֲ�����������
int& test01() {
	int a = 10;
	return a;
}
//2�������ĵ��ÿ�����Ϊ��ֵ

int& test02() {
	static int a = 10;
	return a;
}

int main() {

	//int &ref = test01();
	//cout << "ref=" << ref << endl;//��һ�ν����ȷ����Ϊ���������˱���
	//cout << "ref=" << ref << endl;//�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�


	int &ref = test02();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	test02() = 1000;//test02()���ص�ֵ�����ã���������ĵ��ÿ�����Ϊ��ֵ  a�ĵ�ַ��ֵ = 1000
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl;
	system("pause");
	return 0;
}