#include <iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string gender;
	
};

void bubbleSort(hero array[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (array[j].age > array[j + 1].age)
			{
				struct hero temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main() {

	struct hero array[5] =
	{
		{"���� ",23," ��"},
		{"���� ",22," ��"},
		{"�ŷ� ",20," ��"},
		{"���� ",21," ��"},
		{"���� ",19," Ů"}
	};

	int len = sizeof(array) / sizeof(array[0]);
    bubbleSort(array,len);

	for (int i = 0; i < len; i++)
	{
		cout << array[i].age << " " << array[i].name << array[i].gender << endl;
	}

	system("pause");
	return 0;
}