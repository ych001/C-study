#include <iostream>
using namespace std;

/*int main() {
	//�ҳ�С���������Ϊ����

	//1.����arr����
	//int arr[5] = { 300,350,500,400,250 };
	//int max = 0;//����
	////2.�ж���ֻС�����ֵ
	//for (int i = 0;i < 5;i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}
	////3.��ӡ�������
	//cout << max << endl;




	//Ԫ��������ϰ
	
	int arr1[5] = { 1,3,2,5,4 };
	
	int star = 0;
	int end = sizeof arr1 / sizeof arr1[0] - 1;
	cout << "��������ǰ��" << endl;
	for (int i = 0;i < 5;i++)
	{
		
		cout << arr1[i] << endl;
	}
	

	while(star < end)
	{
		int temp = arr1[star];
		arr1[star] = arr1[end];
		arr1[end] = temp;

		star++;
		end--;
	}
	cout << "�������ú�" << endl;
	for (int i = 0;i < 5;i++)
	{
		
		cout << arr1[i] << endl; 
	}
	
	system("pause");
	return 0;
}*/