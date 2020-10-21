/*Delete a value from after kth index(take input k from user) from array shift all other to left .....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>
int main()
{
    int a[100] = {2,3,5,7,11,13,17,19,23,29}, max_size = 100, size = 10;
    int i,K;
    printf("Array : ");
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n\n");
    printf("Enter Index K :\n");
    scanf("%d",&K);
    ///printf("%d",K);
    K++;
    if(K<=0 || K>=max_size)
    {
      printf("\nArray Index Out of Bound\n");
    }
    else if(K>=size)
    {
      printf("\nArray Index Out of Range\n");
    }
    else
    {
        printf("\nBefore :\n");
        for(i=0;i<size;i++)
        {
           printf("%d ",a[i]);
        }
        printf("\n\n");
        for(i=K;i<size-1;i++)
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


