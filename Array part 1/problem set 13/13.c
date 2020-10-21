/*Delete a value before X(take input X from user) from the array shift all other to left.if x is not present in the given array print"element not found".Only delete the first occurrence of the value .....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>
int main()
{
    int a[100] = {23,65,7,8,9,56,76,3,5,6}, max_size = 100, size = 10;
    int i,y,index=-1;
    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n\nEnter Value y :\n");
    scanf("%d",&y);
    ///printf("%d",y);
    for(i=0;i<size;i++)
    {
      if(y == a[i])
        {
         index=i;
         index--;
         break;
        }
    }
     ///printf("%d\n",index);

    if(index == -1)
    {
        printf("\nElement Not Found\n");
    }
    else
    {
        printf("\nBefore :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n\n");
        for(i=index;i<size-1;i++)
            {
              a[i] = a[i+1];
            }
             size--;
        printf("After :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
