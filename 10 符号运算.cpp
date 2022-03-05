#include <iostream>
using namespace std;

int main10() {
	//a++与++a的区别 
	//前置递增先让变量+1  再进行表达式运算
	//后置递增先对表达式进行运算  再对变量+1
	int a1 = 10, a2 = 10;
	int b1 = ++a1 * 2;
	int b2 = a2++ * 2;
	cout << "a1=" << a1 << "a2=" << a2 << "\nb1=" << b1 << ",b2=" << b2 << endl;
	return 0;
}