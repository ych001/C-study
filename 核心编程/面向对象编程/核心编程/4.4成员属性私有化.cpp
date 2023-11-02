#include<iostream>
using namespace std;

//将成员属性私有化可以自己控制读写权限

/*class Person
{

public:

	//设置姓名
	void setName(string name)
	{
		m_name = name;
	}
	//获取姓名
	string getName()
	{
		return m_name;
	}

	int getAge()
	{
		return m_age;
	}
	void setLover(string Lover)
	{
		m_Lover = Lover;
	}
	int setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "你个老妖精！" << endl;
		}
		else
		{
			m_age = age;
			return m_age;
		}
		
	}
private:
	//姓名       可读可写
	string m_name;
	//年龄       可读
	int m_age = 0;
	//情人       可写
	string m_Lover;
};


int main() {

	Person P;
	P.setName("李四");
	cout << P.getName() << endl;
	P.setLover("王五");
	P.setAge(20);
	cout << "你的年龄为： " << P.getAge() << endl;

	system("pause");
	return 0;
}*/