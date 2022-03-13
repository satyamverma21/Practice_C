// program to find simple interest
#include<stdio.h>

int main()
{

int p , r , t , ans;
printf("enter your principal amt. = ");
scanf("%d",&p);
printf("enter rate of interest  = ");
scanf("%d",&r);
printf("enter time = ");
scanf("%d",&t);

ans = (p*r*t)/100;
printf("total interest is equal to = %d", ans);

}




