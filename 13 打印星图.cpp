#include <iostream>
using namespace std;
int main13() {
	goto FLAG;//±ê¼Ç
	//ÐÇÍ¼
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	FLAG:
	for (int i = 1; i <10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}
	return 0;
}