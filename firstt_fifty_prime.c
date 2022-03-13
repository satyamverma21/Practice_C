#include<stdio.h>
int main()
{
 int a ,b,c=0,x=0,i;
//  printf("enter the number you want to check :");
//  scanf("%d",&a);
for(a=1 ; a <10000 ; a++ )
 { for(i=1;i<a;i++)
    {
      b=a%i;
      if(b==0){c++;}
    }
    
    if (c<=1){printf(" %d \n ",a);x++;}
    c=0;
    if(x==50){break;}
 }
 
//  else{printf("num is not prime");}

}