/*Scan values from values from user into an array until user input is 0(zero).....
Razia Sultana Himu
ID-1915002542
*/
#include <stdio.h>
int main()
{
    int array[100];
    int a = 0;
    while(scanf("%d,&array[a]") != EOF)
    {
        if (0 == array[a])
        {
            break;
        }
        else if (a>100)
        {
            printf("overflow");
            break;
        }
        else
        {
            a++;
        }
    }
    return 0;
}
