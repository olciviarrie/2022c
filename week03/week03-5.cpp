#include <stdio.h>

char line[1005];
int main()
{
	int t=1;
	while(gets(line))
	{
		if(t>1)printf("\n");
		printf("車廂%d讀到一筆資料\n",t);
		t++;
	}
	return 0;
}
