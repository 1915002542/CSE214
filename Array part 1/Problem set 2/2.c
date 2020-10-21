/*Insert a value X(take input X from user) in the array at the end of currently stored elements .....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>
int main()
{
int a[100]={2,4,6,7,8,9,3,4};
int i=0;
printf("Before Adding value to that the Last Index: \n\n");
for(i=0;i<100;i++){
printf("%d",a[i]);
}
printf("\n\n insert a value at the last index:");
scanf("%d",&a[99]);
printf("After Adding  value to the Last 10th Index:\n\n");
for (i=0;i<100;i++){
printf("%d",a[i]);

if(i<10){
printf(" ");}
}
return 0;

}
