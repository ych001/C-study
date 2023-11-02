#include<iostream>
using namespace std;

//三种访问权限
//public     公共权限     类内可以访问  类外也可以访问
//protected  保护权限     类内可以访问  类外不可以访问     子可以访问父的内容
//private    私有权限     类内可以访问  类外不可以访问     子不可以访问父的内容


/*class person
{
public://公共权限
	string m_Name;//姓名

protected://保护权限
	string m_Car;//汽车

private://私有权限
	int m_Password;//密码

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}

};

int main() {

	person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";   保护权限类外不可以访问
	//p1.m_Password;       私有权限类外不可以访问




	system("pause");
	return 0;
}*/