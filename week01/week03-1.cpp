#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int total=0;
	//for(int k=0;k<4;k++)
	while(scanf("%s",line)==1)
	{
		//scanf("%s",line);
		int ans=0;

		int N=strlen(line);
	    for(int i=0;i<N;i++)
		{
			if(line[i]=='2') ans++;
		}
		printf("%d\n",ans);
		total+=ans;
	}
	printf("Total: %d\n",total);
}
