// let 147 so [cube of 1 + of 4 + of 7] is equal to 147 called armstrong num 
#include<stdio.h>
int main()
{
 int a=0 ,b,s=0,x, n;
 printf("enter number :");
 scanf("%d",&n);
 x=n;
 while (n>0)
 {
     b=n%10;
     a =a+b*b*b;
     n=n/10;
 }
 a==x?printf("yes"):printf("no");
}
