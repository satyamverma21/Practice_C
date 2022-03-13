#include<stdio.h>

int main()
{
 int a , b;
 printf(" TABLE OF :- ");
 scanf("%d",&a);
 b=a;
 while(a != 10*b )
 {
     a+=b;
     printf("-- %d \n",a);
 }


}