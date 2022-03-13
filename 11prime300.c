#include<stdio.h>//done
int main()
{int i , j , a=0;
    for(i=1;i<301;i++)
    { for(j=1; j<i;j++)
   
        {if(i%j==0)
            {a++;}
            
        }
      if(a==1)
     
      {printf("%d is prime number\n ",i);}
      a=0;
    }
 



}