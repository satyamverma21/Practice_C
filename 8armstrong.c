#include<stdio.h>//done
int main()
{
 int n1,n2,a=0,b;
 printf("ENTER NUMBER YOU WANT TO CHECK :");
 scanf("%d",&n1);
 n2=n1;
 while (n1>0)
 {b=n1%10;
 a=a+b*b*b;
 n1=n1/10;
 }
 
 n2==a?printf("%d is armstrong",n2):printf("%d is not armstrong",n2);


}