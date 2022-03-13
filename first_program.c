# include<stdio.h>

int main()
{
 int a, b ,c;
 printf("enter the value of a \n");
 scanf("%d",&a);

 printf("enter the value of b \n");
 scanf("%d",&b);
 printf("BEFORE swapping ...the value of a was %d \n                 the value of b was %d \n",a,b);
 
 c=a;
 a=b;
 b=c;
 printf("AFTER swapping ...the value of a is %d \n                 the value of b is %d",a,b);

getch();
}
