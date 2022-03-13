#include<stdio.h>
int main()
{
int sub_a, sub_b ,sub_c, percentage;
printf("enter the marks of all three subjects one by one :");
scanf("%d %d %d",&sub_a ,&sub_b ,&sub_c);

percentage = (sub_a+sub_b+sub_c)/3;

if (percentage>=40 && sub_a >32 && sub_b >32 && sub_c >32)
{
    printf("you are passed the exam with %d percentage",percentage);

}
else{ printf("BEETER LUCK NEXT TIME");}


}