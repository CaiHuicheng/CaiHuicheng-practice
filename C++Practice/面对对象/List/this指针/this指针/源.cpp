#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;
	}
	int age;
	Person &PersonAddage(Person &p) {//����& ʱ��ԶΪ20 ��Ϊ����ʱ�������� ��&���ص�ʱ���������ݵ�ַ
		this->age += p.age;
		return *this;
	}
};

//1��������Ƴ�ͻ����
void test01() {
	Person p1(18);
	cout << p1.age << endl;
}

//2�����ض�������*this
void test02() {
	Person p1(10);
	Person p2(10);
	p2.PersonAddage(p1).PersonAddage(p1);
	cout << p2.age << endl;
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
