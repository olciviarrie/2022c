///week11 step02-1
///#include <stdio.h>
#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std;///std::���Ʀn�X��
int main()
{
	int n;
	///scanf("%d",n);
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> name[i] >> grade[i];
	}///�A�����,���k�y���ܼƸ�
	for(int  i=0;i<n;i++)
	{
		cout << name[i] << endl;///end line����
	}   ///   �e�쥪�� << �ܼ�
}
