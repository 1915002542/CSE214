/*Delete a value after X(take input X from user) from the array shift all other to left.if x is not present in the given array print"element not found".Only delete the first occurrence of the value .....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,2,17,5,23,25}, size=10;
    int i,x,index=-1;

    printf("Array :");
    for(i=0;i<size;i++)

    {
        printf("\n%d",a[i]);
    }

    printf("\n\nEnter value x :\n");
    scanf("%d",&x);
    //
    for(i=0;i<size;i++)
    {
        if(x==a[i])
        {
            index=i;
            index++;
            break;
        }
    }

    if(index == -1)
    {
        printf("\nElement Not Found\n");

    }
    else
    {
        if(index>=size)
        {
            printf("\nArray Index Out Of Range");
        }
        else
        {
            printf("\nBefore :\n");
            for(i=0;i<size;i++)
            {
                printf("%d",a[i]);
            }
            printf("\n\n");
            for(i=index;i<size-1;i++)
            {
                a[i]=a[i+1];
            }
            size--;
            printf("After : \n");
            for(i=0;i<size;i++)
            {
                printf("%d",a[i]);
            }
            printf("\n");
        }
    }
}
