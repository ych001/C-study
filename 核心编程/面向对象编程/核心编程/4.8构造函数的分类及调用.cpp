#include<iostream>
using namespace std;

//函数的构造
//按照参数分类：默认构造函数和有参构造函数
//按照类型分类：普通构造   拷贝构造
class Person
{
public:
	Person()
	{
		cout << "Person的无参构造函数" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数" << endl;
	}

	//拷贝构造函数
	Person(const Person &P)
	{
		age = P.age;
		cout << "Person的拷贝构造函数" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数" << endl;
	}
	
	int age;

};


int main() {


	system("pause");
		return 0;
}