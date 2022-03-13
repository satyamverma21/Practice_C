#include<stdio.h>

int main()
{
float income ,tax ,a,b,c;
printf("enter your income : ");
scanf("%f",&income);

a=income-250000;
b=income-500000;
c=income-1000000;

if (income <= 250000){printf("you are tax free");}
if (a>0 && b<0 && c<0)
    {
    tax = a*0.05;
    printf("your income is more tham 250000\n");
    printf("you have to pay tax : %.2f",tax);
    }
else if (b>=0 && c<0)
    {
    tax =    a*0.05 + b*0.2; 
    printf("your income is more tham 500000\n");
    printf("you have to pay tax : %.2f", tax)    ;

    }
else if (c>=0)
    {
    tax =    a*0.05 + b*0.2+ c*0.3; 
    printf("your income is more tham 1000000\n");
    printf("you have to pay tax : %.2f", tax)    ;

    }




}