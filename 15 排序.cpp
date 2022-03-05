#include <iostream>
using namespace std;
int main15() {
	int arr[] = { 7,4,2,8,6,0,5,9,1,3 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//Ã°ÅÝÅÅÐò
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length-i-1; j++)
		{
			if (arr[j] > arr[j+1]) {
				int z = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = z;
			}
		}
	}for (int i = 0; i < length; i++)
		{
			cout << arr[i] << " ";
		}

	return 0;
}