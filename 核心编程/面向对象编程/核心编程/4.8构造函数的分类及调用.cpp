#include<iostream>
using namespace std;

//�����Ĺ���
//���ղ������ࣺĬ�Ϲ��캯�����вι��캯��
//�������ͷ��ࣺ��ͨ����   ��������
class Person
{
public:
	Person()
	{
		cout << "Person���޲ι��캯��" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯��" << endl;
	}

	//�������캯��
	Person(const Person &P)
	{
		age = P.age;
		cout << "Person�Ŀ������캯��" << endl;
	}

	~Person()
	{
		cout << "Person����������" << endl;
	}
	
	int age;

};


int main() {


	system("pause");
		return 0;
}