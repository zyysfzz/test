#include <iostream>
using namespace std;
int main12() {
	//��1--100�����ҳ� ��λ���� �� ʮλ����
	//�����ߵı��������֣�����������ӡ�
	for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "������\t";
		}
		else {
			cout << i<<"\t";
		}
		if (i % 9 == 0) {
			cout << endl;//9��һ����
		}
	}
	return 0;
}