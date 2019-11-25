#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有化
//1、可以自己控制读写权限
//2、对于写可以检测数据的有效性
class Person {
public:
	//设置名字
	void setName(string w_name)
	{
		name = w_name;
	}
	//获取名字
	string getName()
	{
		return name;
	}

private:
	//姓名 可读可写
	string name;
	//年龄 只读
	int age;
	//情人 只写
	string lover;
};



int main() {
	Person p;
	p.setName("正桑");
	cout << p.getName() << endl;


	system("pause");
	return 0;
}