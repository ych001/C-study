#include <iostream>
using namespace std;
#define MAX 1000

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨ��¼  *****" << endl;
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
//1.�����ϵ�˺���
void addPerson(Adressbooks* abs)
{
	if(abs->m_Size == MAX)
	{ 
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//�������
		cout << "����������  " << endl;
		string name;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//����Ա�
		cout << "�������Ա� " << endl;
		cout << "1----��" << endl;
		cout << "2----Ů" << endl;
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
				cout << "������������������" << endl;
			}
		}

		//�������
		cout << "��������� " << endl;
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
				cout << "����������������� " << endl;
			}
		}
		//�����ϵ��ʽ
		cout << "��������ϵ��ʽ " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//��ӵ�ַ
		cout << "����ӵ�ַ " << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;
		cout << "�������ɣ��� " << endl;
		//����ͨ��¼
		abs->m_Size++;
		system("pause");
		system("cls");//����
	}
}

//2.��ʾ��ϵ��
void showPerson(Adressbooks* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "����: " << abs->personArray[i].m_Name << "\t";
			cout << " ����: " << abs->personArray[i].m_Age << "\t";
			cout << " �Ա�: " << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
			cout << " ��ϵ��ʽ: " << abs->personArray[i].m_Phone << "\t";
			cout << " ��ַ: " << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ����ڷ���������λ�ã������ڷ���-1
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
	cout << "������Ҫɾ������ϵ��  " << endl;
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
			cout << "ɾ���ɹ�" << endl;
	    }
		else
		{
			cout << "���޴��ˣ�" << endl;
		}
		system("pause");
		system("cls");
}

//������ϵ��
void findPerson(Adressbooks* abs)
{
	cout << "��������ҵ���ϵ�������� " << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "����  " << abs->personArray[ret].m_Name << endl;
		cout << "�Ա�  " << abs->personArray[ret].m_Sex << endl;
		cout << "����  " << abs->personArray[ret].m_Age << endl;
		cout << "�绰  " << abs->personArray[ret].m_Phone << endl;
		cout << "��ַ  " << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�޸���ϵ����Ϣ
void modifyPerson(Adressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs,name);
	if (ret != -1)
	{
		cout << "�������޸ĵ�����" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		cout << "�������޸���ϵ���Ա� " << endl;
		int sex = 0;
		cout << "1----��" << endl;
		cout << "2----Ů" << endl;
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
				cout << "�����������������" << endl;
			}
		}
		cout << "�������޸���ϵ�˵����� " << endl;
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
				cout << "�����������������" << endl;
			}
		}
		cout << "��������ϵ��ʽ" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		cout << "�������ַ" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
		cout << "��ϲ������޸�" << endl;
		system("pause");
		system("cls");

	}
	else
	{
		cout << "���޴��� " << endl;
	}
	system("pause");
	system("cls");
}
//�����ϵ��
void cleanPerson(Adressbooks* abs)
{
	abs->m_Size = 0;
	cout << "�������ϵ�� " << endl;
	system("pause");
	system("csl");
}

int main() {

	Adressbooks abs;
	abs.m_Size = 0;
	int select = 0;

	while (true)
	{
		//�˵�����
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
		deletePerson(&abs); 
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨ��¼
			cout << "��ӭ�´�ʹ��" << endl;
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