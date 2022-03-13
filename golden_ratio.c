// hint fib(n) = fib(n-1) + fib(n-2)

#include<stdio.h>
float main()    
{
    int n , a= 0 , b = 1,c=0;
    printf("term of fibo: ");
    scanf("%d",&n);

    for(int i = 0 ; i <= n;i++)
    {
        printf("%d \n",a);
        c= (int)b+a ;
        printf("c(%f)/b(%f) == %f",(float)c,(float)b,(float)c/b);
        a=(int)b;
        b=(int)c;
    }

}