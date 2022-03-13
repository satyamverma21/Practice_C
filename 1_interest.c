#include<stdio.h>
int main()
{
int rate , time , principal_amt , interest ;
printf("enter the value of principal amt :");
scanf("%d",&principal_amt);
printf("enter the period of time in years :");
scanf("%d",&time);
printf("enter the rate of interest per year :");
scanf("%d",&rate);
    
interest =(principal_amt*rate*time)/100;
printf("value of simple interest is : %d",interest);
return 0;

}