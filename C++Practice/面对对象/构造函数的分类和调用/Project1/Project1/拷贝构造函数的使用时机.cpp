#include<iostream>
#include<string>
using namespace std;
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���µĶ���
//2��ֵ���ݵķ�ʽ������������ֵ
//3��ֵ��ʽ���ؾֲ�����

class Person {
public:
	Person() {
		cout << "Ĭ��" << endl;
	}
	~Person() {
		cout << "��" << endl;
	}
	Person(int age1) {
		cout << "�в�" << endl;
		age = age1;
	}
	Person(const Person &p) {
		cout << "����" << endl;
		age = p.age;
	}
	int age;
};

void test01() {
	Person p1(20);
	Person p2(p1);
	cout << p2.age << endl;
}
void doWork(Person p) {
	/*Person p1;
	return p1;*/
}

void test02() {
	Person p;
	doWork(p);
}

Person doWork02() {
	Person p1;
	return p1;
}
void test03() {
	Person p = doWork02();
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
