/*Scan N(take input N from user) values  from user into an array.....
Razia Sultana Himu
ID-1915002542
*/
#include <stdio.h>
int main()
{
    int array[100];
    int a,N;
    scanf("%d",&N);
    if(N>100)
    {
        printf("overflow");
    }
    else
    {
        for (a=0;a<N;a++)
        {
            scanf("%d",&array[a]);
        }
    }
    return 0;
}
