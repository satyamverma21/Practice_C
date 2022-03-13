#include<stdio.h>
int main(){

int num;
int a=-1 ,b=-1,count =0;

while (num!=(-1))
{
    printf("enter num : ");
    scanf("%d",&num);

    if((num!=a)&&(num!=b)){count++;b=a;a=num;printf("\n-----------:%d",count);}

}

if(count>3){printf("\nhhhhhhhhhhhhhhh:%d",count);}






}