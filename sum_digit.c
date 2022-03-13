#include<stdio.h>
int main()
{
    int r , n ,s =0 ;
    printf("enter a number :- ");
    scanf("%d",&n);

    while (n>0)
    { 
        r = n%10;
        s=s+r;
        n=n/10;
    }

    printf("sum= '%d'",s);
     return 0;
     
}


