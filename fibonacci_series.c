//wap to enter no. of terms of fibonacci series [0+1+1+2+3+5+8+13] ,1+2=3  2+3=5 3+5=8 5+8=13;
#include<stdio.h>
int main()
{
int i, n, x,y=1,z=0;
printf("enter no of terms :");
scanf("%d",&n);



for ( i = 0; i < n; i++)
{ 
    x=y+z ;
    printf("%d",x);
    z=y ;
    y=x ;
 }
}


