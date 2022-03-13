#include<stdio.h>//done
#include<math.h>
void main()
{
 int num ,i,rem,div; 
 printf("ENTER FIVE DIGIT NUMBER : ");
 scanf("%d",&num);

 for (i=4; i>0 ; i--)
 { 
   rem=num/(pow(10,i));
   num=num-(pow(10,i)*rem);
   printf("%d\n",rem);
 }
 printf("%d",num+1);
}