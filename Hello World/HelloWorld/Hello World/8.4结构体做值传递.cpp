#include <iostream>
using namespace std;


/*struct student
{
	string name;
	int age;
	int core;
};

//1.值传递
void printStu1(student s)
{
	s.age = 100;
	cout << "在子函数1中打印  姓名 " << s.name << " 年龄 " << s.age << " 分数 " << s.core << endl;
}

//2.地址传递
void printStu2(student* p)
{
	p->age = 200;
	cout << "在子函数2中打印  姓名 " << p->name << " 年龄 " << p->age << " 分数 " << p->core << endl;
}

int main() {

	student s = { "张三",25,80 };

	//printStu1(s);//在值传递中形参发生改变不会影响实参
	printStu2(&s);//在地址传递中形参发生改变会影响实参

	cout << "在main函数中打印 姓名 " << s.name << " 年龄 " << s.age << " 分数 " << s.core << endl;

	system("pause");
	return 0;
}*/