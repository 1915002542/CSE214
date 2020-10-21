/*Search a value x(take input x from user) in the array and print"Found" if x found in the array otherwise print"Not Found" .....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>
int main(){
int a[100]={1,2,3,4,5,6,78,9,10};
int i,y,count=0;
printf("Enter a value you want to search :");
scanf("%d",&y);
for(i=0;i<100;i++)
{
    if(a[i]==y)
        count++;
}
if(count==0)
    printf("Not Fount!\n");

    else
        printf("Found!");
    return 0;
}
