#include <iostream>
using namespace std;
#include "min.h"
// ����������ʽ
 /*
 
 ����ֵ���� �������������б�
{
	���������
	return���ʽ
 }

 ������ʽ
 1���޲��޷�
 2���в��޷�
 3���޲��з�
 4���в��з�

 */

 //max��������
 //ע�⣺�������������ж�ζ���������ֻ������һ��
int max(int a, int b);

int add(int a, int b) {
	int sum = a + b;
	return sum;
}
int main() {
	//����a,b��Ϊ�βΣ�num1,num2��Ϊʵ��
	//ֵ����ʱ���βθı䲻Ӱ��ʵ��
	int num1 = 1, num2 = 2;
	cout << add(num1, num2) << endl;
	cout << max(num1, num2) << endl;
	cout << min(num1, num2) << endl;
	return 0;
}
//max��������
int max(int a, int b)
{
	return a > b ? a : b;
}
