#include<stdio.h>
int factorial(int n);
int main()
{
 int n ;
 printf("enter the num u want to find factorial of ");
 scanf("%d",&n);
 printf("factorial of %d is %d ",n ,factorial(n));

}

int factorial(int n)
{
//   printf("%d\n",n); //this help to check how code is repeating itself with diff values. 
  
     if (n==1 || n==0) {return 1 ;}
     else {return n * factorial(n-1);}

}