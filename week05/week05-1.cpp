#include <stdio.h>
int a[10]={9,8,7,1,3,4,2,6,5,0};
int main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
}
