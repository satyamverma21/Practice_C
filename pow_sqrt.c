#include<stdio.h>
#include<math.h>

int main()
{
 int num ,power,new;
 printf("finding root - \n enter your number :");
 scanf("%d",&num);
 printf("square root of number is %.2f",sqrt(num));
 printf("\n enter power of number :");
 scanf("%d",&power);
//  new=pow(num,power);
//  printf(" new number is :%d",new);
 
 printf(" new number is :%.2lf",pow(num,power));


}