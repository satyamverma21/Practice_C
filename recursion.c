//sum of n natural nums using recurtion

#include<stdio.h>
#include<stdlib.h>

int sum(int n );

int main()
{
    int n ,a;
    printf("enter number : ");
    scanf("%d",&n);
    a=sum(n);
    printf("sum is %d",a);
    return 0;
}

int sum(int n)
{ 
  if(n==0){return 0;}
    return n+sum(n-1);
}

