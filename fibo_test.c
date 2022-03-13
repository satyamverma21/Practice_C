#include<stdio.h>
float main()
{
    float n , a= 0 , b = 1,c=0;
    printf("term of fibo: ");
    scanf("%f",&n);

    for(int i = 0 ; i <= n;i++)
    {
        printf("%.0f \n",a);

        c= b+a ;
        printf("c(%.0f)/b(%.0f) == %.2f \n",c,b,c/b);
        a=b;
        b=c;
    }

}