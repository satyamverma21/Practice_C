#include<stdio.h>
float avg(int a ,int b ,int c);
int main()
{   float a,b,c;
    printf("enter 3 numbers :");
    scanf("%f%f%f",&a,&b,&c);

    printf("avg is %f",avg(a,b,c));

return 0;
}


float avg(int a, int b ,int c)
{
    return (float)(a+b+c)/3;
}