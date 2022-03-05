#include <iostream>
using namespace std;
int main14() {
	int arr[] = { 100,120,300,221,153,333 };
	int arr2[5];
	int arr3[3] = { 1,2 };//其余未给元素自动赋值0
	cout << "数组元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "arr数组存储首地址(arr)：" << arr << endl;
	cout << "arr数组存储首地址(&arr)：" << &arr << endl;
	cout << "第一个元素内存地址：" << &arr[0] << endl;
	
	//五只小猪找最重
	int max = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		max = arr[i] > max ? arr[i] : max;
	}
	cout << "最重的pig是：" << max << endl;

	//数组元素逆置
	int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
	while (left < right)
	{
		int z = arr[left];
		arr[left] = arr[right];
		arr[right] = z;
		left++; right--;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
	return 0;
}