#include<stdio.h>
int mian(){
int a ,b ,t ;

printf("enter two numbers : ");
scanf("%d%d",&a,&b);
if(b>a)
{   t=a ;   a=b ;   b=t ;}


while (!(b==0))
{
    t=a ;   a=b ;   b=t%b;
}

printf("gcd is %d")



}