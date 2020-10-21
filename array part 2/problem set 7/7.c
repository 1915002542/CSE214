/*Print the array elements in reverse order,each element should be separated by space.....
Razia Sultana Himu
ID-1915002542
*/
#include<stdio.h>
void main(){

int a[100],i;

a[0]=10;
a[1]=20;
a[2]=30;
a[3]=40;
a[4]=50;
a[5]=60;
a[6]=70;
a[7]=80;
a[8]=90;
a[9]=100;

for(i=9;i>=0;i--){
printf("%d",a[i]);

if(i<10){
printf(" ");}
}
}
