#include <iostream>
using namespace std;
int main14() {
	int arr[] = { 100,120,300,221,153,333 };
	int arr2[5];
	int arr3[3] = { 1,2 };//����δ��Ԫ���Զ���ֵ0
	cout << "����Ԫ�ظ�����" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "arr����洢�׵�ַ(arr)��" << arr << endl;
	cout << "arr����洢�׵�ַ(&arr)��" << &arr << endl;
	cout << "��һ��Ԫ���ڴ��ַ��" << &arr[0] << endl;
	
	//��ֻС��������
	int max = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		max = arr[i] > max ? arr[i] : max;
	}
	cout << "���ص�pig�ǣ�" << max << endl;

	//����Ԫ������
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