#include <iostream>
using namespace std;
int main12() {
	//从1--100数中找出 个位含七 或 十位含七
	//或是七的倍数的数字，输出“敲桌子”
	for (int i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "敲桌子\t";
		}
		else {
			cout << i<<"\t";
		}
		if (i % 9 == 0) {
			cout << endl;//9个一换行
		}
	}
	return 0;
}