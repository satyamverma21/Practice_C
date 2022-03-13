
#include<stdio.h>
#include<conio.h>
int sod(int);
int main()
{
    int num,sum;
    printf("Input A Number=");
    scanf("%d",&num);
    sum=sod(num);
    printf("Sum Of Odd Digits=%d",sum);
    getch();
}
int sod(int num)
{
    int r,sum=0;
    while(num!=0)
    {
        r=num%10;
        if(r%2!=0)
        sum=sum+r;
        num=num/10;
    }
    return(sum);
}
