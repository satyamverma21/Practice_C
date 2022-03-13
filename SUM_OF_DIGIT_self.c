#include<stdio.h>
int main ()
{ int a ,c,b=0;
scanf("%d",&a);
c=a;
    while(a!=0) 
    {
        a=c%10;
        b=b+a;
        c=c/10;
    }
printf("%d",b);


}