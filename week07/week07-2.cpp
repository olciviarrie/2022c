///07-1�i����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[1000][20];//�iŪ�J1000��A30�Ӧr��

int compare( const void *p1, const void *p2 )
{
	return strcmp( (char*)p1, (char*)p2 );
}

int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)//input
	{
		scanf("%s",line[i]);
	}

	qsort( line , n, 20, compare );

	for(int i=0;i<n;i++)//ouput
	{
		printf("%s\n",line[i]);
	}
}


