#include <iostream>
using namespace std;

/*struct student
{
	string name;
	int age;
	int core;
};
struct teacher
{
	string Tname;
	struct student sArray[5];
};

//����ʦ����ʦ��ѧ����ֵ
void allocateSpace(teacher tArray[], int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].Tname = "teacher_";
		tArray[i].Tname += nameseed[i];

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "student_";
			tArray[i].sArray[j].name += nameseed[j];
			tArray[i].sArray[j].core = 60;
		}
	}
}


//��ӡ��ʦ����ʦ����ѧ������Ϣ
void printinfo(teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ���� " << tArray[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ�������� " << tArray[i].sArray[j].name << endl;
			cout << "\tѧ���ķ��� " << tArray[i].sArray[j].core << endl;
		}
	}
}

int main() {

	//������ʦ����
	teacher tArray[3];
	//ͨ����������ʦ���鸳ֵ��������ʦ������ѧ����ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);


	//��ӡ
	printinfo(tArray, len);

	system("pause");
	return 0;
}*/