#include<iostream>
using namespace std;
/*
main函数是一个程序的入口
每一个程序有且只有一个main函数
*/
#define Weak 7;
int main1() {
	//输出hello world
	cout << "hello world" << endl;
	//变量创建  数据类型 变量名 = 变量初始值
	int a = 10;
	//常量 
	//1.#define 宏常量
	//2.const 修饰变量
	const int month = 12;
	system("pause");
	return 0;
}