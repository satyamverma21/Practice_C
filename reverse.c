#include<stdio.h>
int main()
{
 int n,sc,st=0;
 printf("hii:");
 scanf("%d",&n);

 while(n!=0)
 {
     st=st*10;
     sc = n%10;
     st=st+sc;     
     n=n/10;
 }
printf("%d",st);

}