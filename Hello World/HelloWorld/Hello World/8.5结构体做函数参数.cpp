#include <iostream>
using namespace std;

/*struct student
{
	string name;
	int age;
	int core;

};

//将函数中的形参改为指针可以减少内存空间，而且不会复制新的副本出来
void printStudent(const student *s)
{
	//s->age = 20;加入const后一旦有修改的操作就会报错，可以防止我们误操作；
	cout << "姓名 " << s->name  << " 年龄 " << s->age  << " 分数 " << s->core  << endl;
}

int main() {

	student s = { "张三",21,85 };
	s.core = 90;
	printStudent(&s);
	cout << "在main函数中 姓名 " << s.name << " 年龄 " << s.age << " 分数 " << s.core << endl;

	system("pause");
	return 0;
}*/