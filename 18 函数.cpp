#include <iostream>
using namespace std;
#include "min.h"
// 函数基本格式
 /*
 
 返回值类型 函数名（参数列表）
{
	函数体语句
	return表达式
 }

 函数样式
 1、无参无返
 2、有参无返
 3、无参有返
 4、有参有返

 */

 //max函数声明
 //注意：函数声明可以有多次而函数定义只可以有一次
int max(int a, int b);

int add(int a, int b) {
	int sum = a + b;
	return sum;
}
int main() {
	//其中a,b称为形参；num1,num2称为实参
	//值传递时，形参改变不影响实参
	int num1 = 1, num2 = 2;
	cout << add(num1, num2) << endl;
	cout << max(num1, num2) << endl;
	cout << min(num1, num2) << endl;
	return 0;
}
//max函数定义
int max(int a, int b)
{
	return a > b ? a : b;
}
