#include<iostream>
#include<string>
using namespace std;
//��Ա��������Ϊ˽�л�
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��
class Person {
public:
	//��������
	void setName(string w_name)
	{
		name = w_name;
	}
	//��ȡ����
	string getName()
	{
		return name;
	}

private:
	//���� �ɶ���д
	string name;
	//���� ֻ��
	int age;
	//���� ֻд
	string lover;
};



int main() {
	Person p;
	p.setName("��ɣ");
	cout << p.getName() << endl;


	system("pause");
	return 0;
}