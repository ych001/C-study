#include<iostream>
using namespace std;

//1.���캯���ķ��༰����

//����
//���ղ������ࣺ  �޲ι��죨Ĭ�Ϲ��죩���вι���
//�������ͷ��ࣺ  ��ͨ���캯���Ϳ������캯��
class Person
{
public:
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		//��������������������ԣ�������������
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}
	int age;

};

void test01()
{
	//1.���ŷ�  ����ʹ��
	/*Person p1;
	Person p2(10);
	Person p3(p2);*/

	//ע������
	// ����Ĭ�Ϻ�����ʱ��Ҫ�ӣ���
	// Person p();  ������������Ϊ��һ������������������Ϊ�ڴ�������
	
	//2.��ʾ��
	Person p1;
	Person p2 = Person(10);
	Person p3 = Person(p2);
	//Person(10);// �������� �ص�  ��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "aaaa" << endl;
	// ע�������Ҫ���ÿ������캯�� ��ʼ����������  ����������Ϊ Person(p3) = Person p3 ��������
	// Person��p3��
	
	//3.��ʽת����	
	Person p4 = 10; //�൱��д��  Person p4 = Person(10);
	Person p5 = p4;


}

//����

int main()
{

	test01();//Ĭ�Ϲ��캯������


	system("pause");
	return 0;
}