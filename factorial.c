#include<stdio.h>
int main()
{
 int a ,b, i;
 printf("number : ");
 scanf("%d",&a);
b=a;
for ( i = a-1; i>0; i--){b=b*i;}
    printf("%d\n",b);
}