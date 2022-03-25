#include <stdio.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);

	for(int i=1;i<=T;i++)
	{
		if(i>1)printf("\n");

		printf("現在讀到的是第%d堆資料\n",i);
		while( gets(line) )
		{
			if(line[0]==0) break;
		}
	}
}
