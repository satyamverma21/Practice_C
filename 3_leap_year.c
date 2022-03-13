#include<stdio.h>

void main(){

int year ;
printf("enter year you want to check \n ");
scanf("%d",&year);

if ( year % 400 == 0 || year % 4 ==0 && year % 100 != 0 )
  {printf("mentioned year is leap year");}

else
  {printf("mentioned year is not leap year");}
  
}