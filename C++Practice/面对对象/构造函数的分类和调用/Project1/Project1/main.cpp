#include<iostream>
#include<string>
using namespace std;
//����
//��������
//���ͷ���
class Person {
public:
	Person() {
		cout << "���캯���ĵ���" << endl;
	}
	//��������
	Person(int a) {
		cout << "�вεĹ��캯���ĵ���" << endl;
	}
	//���ͷ���
	Person(const Person &p) {

	}
	~Person() {
		cout << "�������ĵ���" << endl;
	}
};

void test01() {
	//���ŷ�
	Person s;//Ĭ�Ϲ��캯������
	Person s2(10);//�в�
	Person s3(s2);//����
	//ע������1
	//����Ĭ�Ϲ��캯��ʱ����Ҫ��()
	//Person p1() ����������Ϊ��һ��������������������Ϊ�ڴ�������

	//��ʾ��
	Person p1;
	Person p2 = Person(10);//�вι��� Person(10)Ϊ�������󣬵�ǰ��ִ��������
	Person p3 = Person(p2);
	//ע������2
	//��Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊ���������

	//��ʽת����
	Person c1 = 10;
	Person c2 = c1;
}

int main() {
	test01();
	system("pause");
	return 0;
}
