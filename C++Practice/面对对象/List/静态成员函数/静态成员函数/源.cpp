#include<iostream>
#include<string>
using namespace std;
static int a;
class Person {
public:
	//��̬��Ա����
	static void func() {
		a = 100;//��̬��Ա�������Է��� ��̬��Ա����
		//b = 200;//��̬��Ա���� ���ɷ��� �ǳ�Ա�������޷��������Ǹ������
		cout << "��̬��������" << endl;
	}
};


void test01() {
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func();//˽�еķ��ʲ���
}

int main() {
	test01();
	system("pause");
	return 0;
}
