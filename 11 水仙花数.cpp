#include <iostream>
using namespace std;
int main11() {
	int num = 100, a = 0, b = 0, c = 0;
	//a 个位  b 十位  c 百位
	int p = 0;//三个一换行
	while (num < 10000) {
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		int x = a * a * a + b * b * b + c * c * c;
		if (x == num) {
			cout << num << "\t";
			p++;
			if (p == 3) {
				p = 0;
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}