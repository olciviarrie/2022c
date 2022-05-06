///week11 step02-1
///#include <stdio.h>
#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std;///std::重複好幾次
int main()
{
	int n;
	///scanf("%d",n);
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> name[i] >> grade[i];
	}///你的資料,往右流到變數裡
	for(int  i=0;i<n;i++)
	{
		cout << name[i] << endl;///end line跳行
	}   ///   送到左邊 << 變數
}
