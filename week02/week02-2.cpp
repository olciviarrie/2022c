#include <stdio.h>
#include <string.h>
char line[1000];
int palindrome()
{
    int n=strlen(line);
    for(int i=0;i<n;i++)
    {
        if(line[i]!=line[n-1-i])return 0;///�Y�����ۦPbad=1
    }
    return 1;///�Y���ۦP�~�����
}

int main()
{
	while(scanf("%s",line)==1)
	{
	    int p=palindrome();///�I�s�禡�ӧP�_�A1����0������
		if(p==1) printf("%s -- is a regular palindrome.\n\n",line);
        if(p==0) printf("%s -- is not a palindrome.\n\n",line);
	}
}
