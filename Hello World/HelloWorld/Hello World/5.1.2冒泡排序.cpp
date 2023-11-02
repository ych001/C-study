#include <iostream>
using namespace std;

/*int main() {

	//升序排列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前：" << endl;
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << " \t";
	}
	cout << endl;
	//排序轮数
	for (int k = 0;k < 9 - 1;k++)//外层为循环轮数
	{
		for (int j = 0;j < 9 - k - 1;j++)//内层为对比次数
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << " \t";
	}
	cout << endl;
	system("pause");
	return 0;
}*/