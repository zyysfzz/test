#include <iostream>
using namespace std;

int main10() {
	//a++��++a������ 
	//ǰ�õ������ñ���+1  �ٽ��б��ʽ����
	//���õ����ȶԱ��ʽ��������  �ٶԱ���+1
	int a1 = 10, a2 = 10;
	int b1 = ++a1 * 2;
	int b2 = a2++ * 2;
	cout << "a1=" << a1 << "a2=" << a2 << "\nb1=" << b1 << ",b2=" << b2 << endl;
	return 0;
}