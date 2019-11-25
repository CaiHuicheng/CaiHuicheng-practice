#include<iostream>
#include<string>
#define MAX 1000//���ֵ
using namespace std;

//��ϵ�˽ṹ��
struct Person {
	string pname;//��ϵ������
	int p_sex;//��ϵ���Ա�
	int p_age;//��ϵ������
	string p_phone;//��ϵ�˵绰
	string p_addr;//��ϵ�˵�ַ
};
//ͨѶ¼�ṹ��
struct Addressbooks {
	struct Person personArray[MAX];//��ϵ���������
	int m_size;//�Դ���ϵ����
};

//1���˵�����
void showMenu() {
	cout << "********************************" << endl;
	cout << "***** 1�������ϵ��   *****"<< endl;
	cout << "***** 2����ʾ��ϵ��   *****" << endl;
	cout << "***** 3��ɾ����ϵ��   *****" << endl;
	cout << "***** 4��������ϵ��   *****" << endl;
	cout << "***** 5���޸���ϵ��   *****" << endl;
	cout << "***** 6�������ϵ��   *****" << endl;
	cout << "***** 0���˳�ͨѶ¼   *****" << endl;
	cout << "********************************" << endl;
}

//2�������ϵ��
void addPerson(Addressbooks * abs) {
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�����" << endl;
		return;
	}
	else {
		//��Ӿ�����ϵ��
		
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_size].pname = name;
		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[abs->m_size].p_age = age;
		//�Ա�
		while (true)
		{
			int sex = 0;
			cout << "�������Ա�" << endl;
			cout << "1����\t2��Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].p_sex = sex;
				break;
			}
			cout <<"�����������������룡����"<<endl;
		}
		//�绰
		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->personArray[abs->m_size].p_phone = phone;
		//��ַ
		string adderss;
		cout << "�������ַ��" << endl;
		cin >> adderss;
		abs->personArray[abs->m_size].p_addr = adderss;
		//����ͨѶ¼����
		abs->m_size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}

//3����ʾ��ϵ��
void showPerson(Addressbooks * abs) {
	//�ж�ͨѶ¼�Ƿ�Ϊ��
	if (abs->m_size==0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "����:" << abs->personArray[i].pname << "\t";
			cout << "����:" << abs->personArray[i].p_age << "\t";
			cout << "�Ա�:" << (abs->personArray[i].p_sex == 1?"��":"Ů") << "\t";
			cout << "�绰:" << abs->personArray[i].p_phone << "\t";
			cout << "��ַ:" << abs->personArray[i].p_addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ����
int isExist(Addressbooks * abs, string name) {
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].pname == name)
		{
			return i;
		}
	}
	return -1;
}

//4��ɾ����ϵ��
void deletePerson(Addressbooks * abs) {
	cout << "��������Ҫɾ������ϵ������:" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);//������ϵ���Ƿ����
	if (ret!=-1)
	{
		for (int  i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else {
		cout << "���޴��ˣ�����" << endl;
	}
	system("pause");
	system("cls");

}

//5��������ϵ��
void findPerson(Addressbooks * abs) {
	cout << "��������Ҫ���ҵ���ϵ������:" << endl;

	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "����:" << abs->personArray[ret].pname << "\t";
		cout << "����:" << abs->personArray[ret].p_age << "\t";
		cout << "�Ա�:" << (abs->personArray[ret].p_sex == 1 ? "��" : "Ů") << "\t";
		cout << "�绰:" << abs->personArray[ret].p_phone << "\t";
		cout << "��ַ:" << abs->personArray[ret].p_addr << endl;
	}
	else
	{
		cout << "���޴��ˣ�����" << endl;
	}
	system("pause");
	system("cls");
}

//6���޸���ϵ��
void modifyPerson(Addressbooks * abs) {
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].pname = name;
		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[ret].p_age = age;
		//�Ա�
		while (true)
		{
			int sex = 0;
			cout << "�������Ա�" << endl;
			cout << "1����\t2��Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].p_sex = sex;
				break;
			}
			cout << "�����������������룡����" << endl;
		}
		//�绰
		string phone;
		cout << "������绰��" << endl;
		cin >> phone;
		abs->personArray[ret].p_phone = phone;
		//��ַ
		string adderss;
		cout << "�������ַ��" << endl;
		cin >> adderss;
		abs->personArray[ret].p_addr = adderss;
	}
	else
	{
		cout<< "���޴��ˣ�����" <<endl;
	}

	system("pause");
	system("cls");
}

//7�������ϵ��

void cleanPerson(Addressbooks * abs) {
	abs->m_size = 0;//����¼������Ϊ0�����߼���գ�
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}

int main() {

	//����ͨѶ¼
	Addressbooks abs;
	//ͨѶ¼������ʼ��
	abs.m_size = 0;

	int select = 0;//�û�ѡ������ı���
	
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
			//1�������ϵ��
		case 1:
			addPerson(&abs);
			break;
			//2����ʾ��ϵ��
		case 2:
			showPerson(&abs);
			break;
			//3��ɾ����ϵ��
		case 3:
			deletePerson(&abs);
			break;
			//4��������ϵ��
		case 4:
			findPerson(&abs);
			break;
			//5���޸���ϵ��
		case 5:
			modifyPerson(&abs);
			break;
			//6�������ϵ��
		case 6:
			cleanPerson(&abs);
			break;
			//0���˳�ͨѶ¼
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����������������" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}