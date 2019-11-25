#include<iostream>
#include<string>
#define MAX 1000//最大值
using namespace std;

//联系人结构体
struct Person {
	string pname;//联系人姓名
	int p_sex;//联系人性别
	int p_age;//联系人年龄
	string p_phone;//联系人电话
	string p_addr;//联系人地址
};
//通讯录结构体
struct Addressbooks {
	struct Person personArray[MAX];//联系人最大容量
	int m_size;//显存联系人数
};

//1、菜单界面
void showMenu() {
	cout << "********************************" << endl;
	cout << "***** 1、添加联系人   *****"<< endl;
	cout << "***** 2、显示联系人   *****" << endl;
	cout << "***** 3、删除联系人   *****" << endl;
	cout << "***** 4、查找联系人   *****" << endl;
	cout << "***** 5、修改联系人   *****" << endl;
	cout << "***** 6、清空联系人   *****" << endl;
	cout << "***** 0、退出通讯录   *****" << endl;
	cout << "********************************" << endl;
}

//2、添加联系人
void addPerson(Addressbooks * abs) {
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加！！！" << endl;
		return;
	}
	else {
		//添加具体联系人
		
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].pname = name;
		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[abs->m_size].p_age = age;
		//性别
		while (true)
		{
			int sex = 0;
			cout << "请输入性别：" << endl;
			cout << "1、男\t2、女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_size].p_sex = sex;
				break;
			}
			cout <<"输入有误，请重新输入！！！"<<endl;
		}
		//电话
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_size].p_phone = phone;
		//地址
		string adderss;
		cout << "请输入地址：" << endl;
		cin >> adderss;
		abs->personArray[abs->m_size].p_addr = adderss;
		//更新通讯录人数
		abs->m_size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");
	}
}

//3、显示联系人
void showPerson(Addressbooks * abs) {
	//判断通讯录是否为空
	if (abs->m_size==0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名:" << abs->personArray[i].pname << "\t";
			cout << "年龄:" << abs->personArray[i].p_age << "\t";
			cout << "性别:" << (abs->personArray[i].p_sex == 1?"男":"女") << "\t";
			cout << "电话:" << abs->personArray[i].p_phone << "\t";
			cout << "地址:" << abs->personArray[i].p_addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在
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

//4、删除联系人
void deletePerson(Addressbooks * abs) {
	cout << "请输入您要删除的联系人名字:" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);//查找联系人是否存在
	if (ret!=-1)
	{
		for (int  i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	else {
		cout << "查无此人！！！" << endl;
	}
	system("pause");
	system("cls");

}

//5、查找联系人
void findPerson(Addressbooks * abs) {
	cout << "请输入您要查找的联系人名称:" << endl;

	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名:" << abs->personArray[ret].pname << "\t";
		cout << "年龄:" << abs->personArray[ret].p_age << "\t";
		cout << "性别:" << (abs->personArray[ret].p_sex == 1 ? "男" : "女") << "\t";
		cout << "电话:" << abs->personArray[ret].p_phone << "\t";
		cout << "地址:" << abs->personArray[ret].p_addr << endl;
	}
	else
	{
		cout << "查无此人！！！" << endl;
	}
	system("pause");
	system("cls");
}

//6、修改联系人
void modifyPerson(Addressbooks * abs) {
	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].pname = name;
		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].p_age = age;
		//性别
		while (true)
		{
			int sex = 0;
			cout << "请输入性别：" << endl;
			cout << "1、男\t2、女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].p_sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！！！" << endl;
		}
		//电话
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[ret].p_phone = phone;
		//地址
		string adderss;
		cout << "请输入地址：" << endl;
		cin >> adderss;
		abs->personArray[ret].p_addr = adderss;
	}
	else
	{
		cout<< "查无此人！！！" <<endl;
	}

	system("pause");
	system("cls");
}

//7、清空联系人

void cleanPerson(Addressbooks * abs) {
	abs->m_size = 0;//将记录人数置为0，做逻辑清空；
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}

int main() {

	//创建通讯录
	Addressbooks abs;
	//通讯录人数初始化
	abs.m_size = 0;

	int select = 0;//用户选择输入的变量
	
	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
			//1、添加联系人
		case 1:
			addPerson(&abs);
			break;
			//2、显示联系人
		case 2:
			showPerson(&abs);
			break;
			//3、删除联系人
		case 3:
			deletePerson(&abs);
			break;
			//4、查找联系人
		case 4:
			findPerson(&abs);
			break;
			//5、修改联系人
		case 5:
			modifyPerson(&abs);
			break;
			//6、清空联系人
		case 6:
			cleanPerson(&abs);
			break;
			//0、退出通讯录
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入错误请重新输入" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}