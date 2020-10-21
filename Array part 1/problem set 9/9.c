/*Delete a value from kth index(take input k from user) from array shift all other to left .....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>

int main()

{

    int a[100];

    int i,pos,n;

    printf("Enter Size of array:");

    scanf("%d",&n);

    printf("Enter element of array:");

    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);
    }

    printf("Enter element size to delete:");

    scanf("%d",&pos);

    if(pos<0|| pos>n){

        printf("Invalid Position.");
    }

    else{

        for(i=pos-1;i<n-1;i++){

            a[i]= a[i+1];
        }

        n--;

        printf("After delete:");

        for(i=0;i<n;i++){

            printf("%d",a[i]);
        }
    }
    return 0;
}
