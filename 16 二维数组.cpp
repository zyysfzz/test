#include <iostream>
using namespace std;
int main16() {
	//��ά����arr[x][y],��������
	//���巽��һ
	int arr[2][3];
	//���巽�������Ϻ���⣩
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//���巽����
	int arr3[2][3] = { 1,2,4,5 };
	//���巽����
	int arr4[][3] = { 1,2,3,4,5,6};
	//�����ӡ
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}

	//��ά��������
	cout << "��ά�����С��" << sizeof(arr2) << endl;
	cout << "��ά����һ����ռ��С��" << sizeof(arr2[0]) << endl;
	cout << "��ά����һ��Ԫ����ռ��С��" << sizeof(arr2[0][0]) << endl;
	cout << "ȡԪ�ص�ַ��" << (int)&arr2[1][2] << endl;
	return 0;
}