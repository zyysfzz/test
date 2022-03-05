#include <iostream>
using namespace std;
// #include<string>
int main8() {

	//1.c风格字符串
	//格式 char 字符串名[] = "";
	//注意：等号后要用双引号
	char str[] = "hello world";
	cout << str << endl;

	//2.c++风格字符串
	//需要包含头文件 ？。？//#include<string>
	string str2 = "hello world";
	cout << str2 << endl;
	return 0;
}