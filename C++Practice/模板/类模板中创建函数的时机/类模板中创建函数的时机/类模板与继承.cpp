#include<iostream>
#include<string>
using namespace std;

//��ģ����̳�

//1��������̳и�����һ��ģ��ʱ��������������ʱ��Ҫָ�����������
template <class T>
class Base
{
public:
	T m;
};
//class Son :public Base //���󣬱���֪��������T�����ͣ��ſ��Լ̳и�����
class Son :public Base<char>
{

};
void test01() {
	Son s1;
}

//2����������ʹ�ø����е�T����,����Ҳ��Ҫ���ģ��
template<class T1,class T2>
class Son2:public Base<T2>
{
	Son2() {
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}
public:
	T1 obj;
};
void test02() {
	Son2<int, char> s2;
}
int main() {

	test02();

	system("pause");
	return 0;
}