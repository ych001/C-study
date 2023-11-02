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

//给老师及老师的学生赋值
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


//打印老师及老师所带学生的信息
void printinfo(teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名 " << tArray[i].Tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生的姓名 " << tArray[i].sArray[j].name << endl;
			cout << "\t学生的分数 " << tArray[i].sArray[j].core << endl;
		}
	}
}

int main() {

	//创建老师数组
	teacher tArray[3];
	//通过函数给老师数组赋值，并给老师所带的学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);


	//打印
	printinfo(tArray, len);

	system("pause");
	return 0;
}*/