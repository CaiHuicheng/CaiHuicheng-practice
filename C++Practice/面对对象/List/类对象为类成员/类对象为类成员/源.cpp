#include<iostream>
#include<string>
using namespace std;

//�������Ϊ���Ա
class Phone {
public:
	Phone(string Pname) {
		m_pName = Pname;
	}
	string m_pName;
};

class Person {

public:
	Person(string name, string pName) :name(name), m_pName(pName) {

	}
	string name;
	Phone m_pName;
};

int main() {
	Person p("����", "P30");
	cout << p.name << p.m_pName.m_pName << endl;
	system("pause");
	return 0;
}
