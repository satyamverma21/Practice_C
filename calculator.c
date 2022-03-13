#include<stdio.h>

int main(){

float c ,a , b , op;
printf("enter your first value = ");
scanf("%f",&a);
printf("enter your second value = ");
scanf("%f",&b);
printf("please enter your operator code \n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n ");
printf("enter your choice = ");
scanf("%f",&c);

if (c == 1 )
{
    op = a+b;
    printf("%f \n",op);
   
}

else if (c == 2)
{
    op = a-b;
printf("%f \n",op);

}

else if (c == 3)
{
    op = a*b;
printf("%f \n",op);
  
}

else if (c == 4)
{
   op = a/b;
printf("%f \n",op); 

}

else
{printf("error");}
getch();

}