#include<stdio.h>
int main()
{
    int a , b=0 ,s;
    printf("number :");
    scanf("%d",&a);

    while(a!=0)
    {s= a%10;
     a=a/10; 
     b=b+s*s*s;
    }

    printf("Ans: %d",b);


}