#include <iostream>
using namespace std;
int main7() {
	
	//整型：short (2) int (4) long (4) long long (8)
	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof（数据类型/变量）
	short n1 = 10;
	int n2 = 10;
	cout << sizeof(long) << "--" << sizeof(int) << endl;
	//整型大小比较
	//short < int <= long <= long long
	//转义字符\t 使显示更整洁
	cout << "aaaaaaa\t12" << endl;
	return 0;
}