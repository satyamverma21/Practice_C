// let 147 so [cube of 1 + of 4 + of 7] is equal to 147 called armstrong num 
#include<stdio.h>//done
int main()
{
 int a=0 ,b,x, i;

 for ( i = 100; i < 301; i++)
    { x=i;
        while (x>0)
            { 
            b=x%10;
            a =a+b*b*b; 
            x=x/10;
            }
           
      
         if(a==i){printf("%d",i);}
         a=0;
        
    }
}
