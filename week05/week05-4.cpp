#include <stdio.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);

	for(int i=1;i<=T;i++)
	{
		if(i>1)printf("\n");

		printf("�{�bŪ�쪺�O��%d����\n",i);
		while( gets(line) )
		{
			if(line[0]==0) break;
		}
	}
}
