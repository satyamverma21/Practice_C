#include<stdio.h>
int main()
{
int a,b,c, root ;
printf("enter the coeficient of x^2 \n");
scanf("%d",&a);
printf("enter the coeficient of x \n");
scanf("%d",&b);
printf("enter the value of c \n");
scanf("%d",&c);

root = b*b - 4*a*c ;
printf("beacuse value of b*b - 4*a*c  is %d that's why : \n",root);

if(root>0){printf("root are real");}
else if (root == 0){printf("roots are real and equal");}
else{printf("roots are imaginary");}

}