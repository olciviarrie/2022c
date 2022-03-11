
#include <stdio.h>
#include <string.h>
char line[2000];
int palindrome()
{
	int n=strlen(line);
	for(int i=0;i<n;i++)
	{
		if(line[i]!=line[n-1-i])return 0;
	}
	return 1;
}

int main()
{
	while(scanf("%s",line)==1)
	{
		int p=palindrome();
		if(p==1)printf("%s -- is a palindrome.\n\n",line);
		if(p==0)printf("%s -- is not a palindrome.\n\n",line);
	}
	return 0;
}
