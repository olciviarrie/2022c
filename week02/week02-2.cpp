#include <stdio.h>
#include <string.h>
char line[1000];
int palindrome()
{
    int n=strlen(line);
    for(int i=0;i<n;i++)
    {
        if(line[i]!=line[n-1-i])return 0;///頭尾不相同bad=1
    }
    return 1;///頭尾相同繼續執行
}

int main()
{
	while(scanf("%s",line)==1)
	{
	    int p=palindrome();///呼叫函式來判斷，1成立0不成立
		if(p==1) printf("%s -- is a regular palindrome.\n\n",line);
        if(p==0) printf("%s -- is not a palindrome.\n\n",line);
	}
}
