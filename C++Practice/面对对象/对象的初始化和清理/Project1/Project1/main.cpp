#include<iostream>
#include<string>
using namespace std;
//����ĳ�ʼ��������
//1�����캯�� ���г�ʼ��
// 2��������
class Person {
public:
	Person() {
		cout << "��ʼ��" << endl;
	}
	~Person() {
		cout << "���" << endl;
	}
};
void test01() {
	Person P;
}

int main() {
	test01();
	Person p;//�������������  ��û����Ŀ��������
	system("pause");
	return 0;
}
