#include <iostream>
using namespace std;

//值传递
/*void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


//地址传递
void swap2(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = * p2;
	*p2 = temp;
	cout << "* p1 = " << *p1 << endl;
	cout << "*p2 = " << * p2 << endl;
}


int main() {

	int a = 10;
	int b = 20;
	swap2(&a, &b);               //地址传递会改变实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap1(a, b);    //值传递不会改变实参

	system("pause");
	return 0;
}*/