#include <iostream>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通信录  *****" << endl;
	cout << "***************************" << endl;
}

struct person
{
	string m_Name;
	int m_Sex = 1;
	int m_Age = 0;
	string m_Phone;
	string m_Addr;
};
struct Adressbooks
{
	struct person personArray[MAX];
	int m_Size = 0;

};
//1.添加联系人函数
void addPerson(Adressbooks* abs)
{
	if(abs->m_Size == MAX)
	{ 
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//添加姓名
		cout << "请输入姓名  " << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//添加性别
		cout << "请输入性别 " << endl;
		cout << "1----男" << endl;
		cout << "2----女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
		}

		//添加年龄
		cout << "请添加年龄 " << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 100)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else
			{
				cout << "输入错误，请重新输入 " << endl;
			}
		}
		//添加联系方式
		cout << "请输入联系方式 " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//添加地址
		cout << "请添加地址 " << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;
		cout << "已添加完成！！ " << endl;
		//更新通信录
		abs->m_Size++;
		system("pause");
		system("cls");//清屏
	}
}

//2.显示联系人
void showPerson(Adressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名: " << abs->personArray[i].m_Name << "\t";
			cout << " 年龄: " << abs->personArray[i].m_Age << "\t";
			cout << " 性别: " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << " 联系方式: " << abs->personArray[i].m_Phone << "\t";
			cout << " 地址: " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//检查联系人是否存在，存在返回数组中位置，不存在返回-1
int isExist(Adressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
		
	}
	return -1;
}

void deletePerson(Adressbooks* abs)
{
	cout << "请输入要删除的联系人  " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
		if (ret != -1)
		{
			for (int i = ret; i < abs->m_Size; i++)
			{
				abs->personArray[i] = abs->personArray[i + 1];
				abs->m_Size--;
			}
			cout << "删除成功" << endl;
	    }
		else
		{
			cout << "查无此人！" << endl;
		}
		system("pause");
		system("cls");
}

//查找联系人
void findPerson(Adressbooks* abs)
{
	cout << "请输入查找的联系人姓名： " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名  " << abs->personArray[ret].m_Name << endl;
		cout << "性别  " << abs->personArray[ret].m_Sex << endl;
		cout << "年龄  " << abs->personArray[ret].m_Age << endl;
		cout << "电话  " << abs->personArray[ret].m_Phone << endl;
		cout << "地址  " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人信息
void modifyPerson(Adressbooks* abs)
{
	cout << "请输入要修改的联系人姓名" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if (ret != -1)
	{
		cout << "请输入修改的姓名" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "请输入修改联系人性别 " << endl;
		int sex = 0;
		cout << "1----男" << endl;
		cout << "2----女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入错误请重新输入" << endl;
			}
		}
		cout << "请输入修改联系人的年龄 " << endl;
		int age = 0;
		while (true)
		{
			cin >> age;
			if (0 < age && 150 > age)
			{
				abs->personArray[ret].m_Age = age;
				break;
			}
			else
			{
				cout << "输入错误，请重新输入" << endl;
			}
		}
		cout << "请输入联系方式" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "请输入地址" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
		cout << "恭喜您完成修改" << endl;
		system("pause");
		system("cls");

	}
	else
	{
		cout << "查无此人 " << endl;
	}
	system("pause");
	system("cls");
}
//清空联系人
void cleanPerson(Adressbooks* abs)
{
	abs->m_Size = 0;
	cout << "已清空联系人 " << endl;
	system("pause");
	system("csl");
}

int main() {

	Adressbooks abs;
	abs.m_Size = 0;
	int select = 0;

	while (true)
	{
		//菜单调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
		deletePerson(&abs); 
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通信录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		default:
			break;

	}
		

	}


	system("pause");
	return 0;
}