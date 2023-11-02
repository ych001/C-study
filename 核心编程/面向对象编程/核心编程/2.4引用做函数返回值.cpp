#include<iostream>
using namespace std;

/*int& test01()
{
	int a = 10;//局部变量，在栈区
	return a;
}

int& test02()
{
	static int a = 20;// 静态变量，存放在全局区，全局区上的数据在程序结束后系统释放。
	return a;

}


int main() {

	//int& a = test01();第一次结果正确，因为编译器做了保留
	//cout << a << endl;第二次结果错误，因为a的内存已经释放。

	int& ref = test02();
	cout << ref << endl;
	cout << ref << endl;
	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值。
	cout << ref << endl;
	cout << ref << endl;


	system("pause");
	return 0;
}*/