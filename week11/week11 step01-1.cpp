///week11 step01-1
///#include <stdio.h>
#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
int main()
{
	int n;
	///scanf("%d",n);
	std::cin >> n;
	for(int i=0;i<n;i++)
	{
		std::cin >> name[i] >> grade[i];
	}///你的資料,往右流到變數裡
	for(int  i=0;i<n;i++)
	{
		std::cout << name[i] << std::endl;///end line跳行
	}   /// 送到左邊 << 變數
}
