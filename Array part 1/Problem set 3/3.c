/*Insert a value X(take input X from user) in the array at third(3rd) index and shift all other value to right .....
Razia Sultana Himu
ID-1915002542
*/
#include <stdio.h>

void main()
{
    int a[100],n,i,temp;

    a[0]=1;

    a[1]=2;

    a[2]=3;

    a[3]=4;

    a[4]=5;

    a[5]=6;

    a[6]=7;

    a[7]=8;

    a[8]=9;

    a[9]=10;

    printf("without Right Shift:");

    for(i=0;i<10;i++){

        printf("%d",a[i]);
    }

    printf("\nEnter value X for 3rd index:");

    scanf("%d",&a[2]);

    //shifing
    temp = a[2];

    for(i=2;i>0;i--){
        a[i]=a[i-1];
    }

    a[0]= temp;

    printf("\nWith Shift:");

    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }


}
