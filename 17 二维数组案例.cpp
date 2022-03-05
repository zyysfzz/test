#include <iostream>
using namespace std;
int main17() {

	//考试成绩统计
	//横行  语数外
	//竖行  张三 李四 王五
	int score[][3] = {
		{100,100,100},
		{90,50,100},
		{60,50,80}
	};
	string name[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int aount = 0;
		for (int j = 0; j < 3; j++)
		{
			aount += score[i][j];
		}
		cout << name[i] << "总分是：";
		cout << aount << endl;
	}
	return 0;
}