/*Insert any value at tenth(10th) index of the array .....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>
int main()
{
int a[100]={10,20,30,40,50,60};
int i=0;
printf("Before Adding value to that the Last Index: \n\n");
for(i=0;i<100;i++){
printf("%d",a[i]);
}
printf("\n\n insert a value at the last index:");
scanf("%d",&a[9]);
printf("After Adding  value to the Last 10th Index:\n\n");
for (i=0;i<100;i++){
printf("%d",a[i]);

if(i<100){
printf(" ");}
}


return 0;

}
