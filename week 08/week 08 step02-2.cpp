///week08 step02-2 檔案輸出

#include <stdio.h>
int main()
{
    FILE * f = fopen("檔案輸出.txt","w+");
    fprintf(f,"Hello我在這裡喔\n");
     printf( "Hello World\n");
}
