#include <iostream>
using namespace std;
int main16() {
	//二维数组arr[x][y],横行数列
	//定义方法一
	int arr[2][3];
	//定义方法二（较好理解）
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//定义方法三
	int arr3[2][3] = { 1,2,4,5 };
	//定义方法四
	int arr4[][3] = { 1,2,3,4,5,6};
	//数组打印
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}

	//二维数组名称
	cout << "二维数组大小：" << sizeof(arr2) << endl;
	cout << "二维数组一行所占大小：" << sizeof(arr2[0]) << endl;
	cout << "二维数组一个元素所占大小：" << sizeof(arr2[0][0]) << endl;
	cout << "取元素地址：" << (int)&arr2[1][2] << endl;
	return 0;
}