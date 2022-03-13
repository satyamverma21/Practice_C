#include<stdio.h>
int main()
{int a = 7 ;
 int *ptr = &a ;

 printf("a is %d\n",a);
 printf("address a is %d\n",&a);
 printf("%x\n",*ptr);// derefrence to value of a 
 printf("%d\n",&ptr);//adress of ptr
 printf("%d\n",*ptr);// derefrence to value of a 
 printf("%d\n",ptr);// adress of a store in ptr
 

 



}