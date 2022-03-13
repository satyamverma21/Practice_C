#include<stdio.h>

int factorial(a)
{int i , final ;
    for ( i = a-1; i > 0; i--)
    { final = a*i;
        a=final;
    }
// printf("%d",final) ;
return final;

}

int main()
{ int a ;
 printf("find factorial of : ");
 scanf("%d",&a);
    factorial(a);
}