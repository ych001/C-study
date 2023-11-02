#include<iostream>
using namespace std;



//注意事项
//1.如果某个位置有了默认参数后，那么从该位置往后，从左到右都必须有默认值。
// int add(int a,int b = 20, int c)
// {
// return a + b + c;
// }
//2.函数声明和函数实现只能有一个地方有默认参数
//int add1(int a, int b, int c);
//int add1(int a = 10, int b = 20, int c = 30)
//{
//	return a + b + c;
//}

/*int add(int a, int b = 20, int c = 30)
{
	return a + b + c;
}



int main() {

	cout << add(10) << endl;




	system("pause");
	return 0;
}*/