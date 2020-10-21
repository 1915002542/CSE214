/*Scan values from user into an array until end of life....
Razia Sultana Himu
ID-1915002542
*/
#include <stdio.h>
int main()
{
    int array[100];
    int a = 0,b;
    while(scanf("%d",&array[a]) != EOF)
    {
        a++;
        if(a+1>100)
        {
            printf("overflow");
            break;
        }
    }
    return 0;
}
