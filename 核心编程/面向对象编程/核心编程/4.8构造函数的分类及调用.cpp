#include<iostream>
using namespace std;

//1.构造函数的分类及调用

//分类
//按照参数分类：  无参构造（默认构造）和有参构造
//按照类型分类：  普通构造函数和拷贝构造函数
class Person
{
public:
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		//将传入的人身上所有属性，拷贝到我身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age;

};

void test01()
{
	//1.括号法  优先使用
	/*Person p1;
	Person p2(10);
	Person p3(p2);*/

	//注意事项
	// 调用默认函数的时候不要加（）
	// Person p();  这样编译器认为是一个函数声明，不会认为在创建对象
	
	//2.显示法
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	//Person(10);// 匿名对象： 特点  当前行执行结束后，系统会立即回收掉匿名对象。
	//cout << "aaaa" << endl;
	// 注意事项：不要利用拷贝构造函数 初始化匿名对象  编译器会认为 Person(p3) = Person p3 对象声明
	// Person（p3）
	
	//3.隐式转换法	
	Person p4 = 10; //相当于写了  Person p4 = Person(10);
	Person p5 = p4;


}

//调用

int main()
{

	test01();//默认构造函数调用


	system("pause");
	return 0;
}