#include<stdio.h>
int main()
{
    int a,b,i,c;
    printf("enter base value and press enter");
    scanf("%d",&a);
    printf("enter it's power");
    scanf("%d",&b);
    c=a;
    for ( i = 1 ; i < b; i++){a=a*c;}
    printf("ANS : %d",a);

}