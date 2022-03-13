// 4  4  4  4  4  4  4
// 4  3  3  3  3  3  4
// 4  3  2  2  2  3  4
// 4  3  2  1  2  3  4
// 4  3  2  2  2  3  4
// 4  3  3  3  3  3  4
// 4  4  4  4  4  4  4

//a formula (2n)-1

#include<stdio.h>

int main()
{

    int n,i,a,k=0;
    

    printf("enter num : ");
    scanf("%d",&n);
    
    a=(2*n)-1;
    for (i=1;i<=a;i++)
    {
      for (int j=1;j<=a;j++)
      {
        

          if((i==1||i==a)||(j==1||j==a)){printf("%d ",n);}

          else if((i==2||i==a-1)||(j==2||j==a-1)){printf("%d ",n-1);}

          else if((i==3||i==a-2)||(j==3||j==a-2)){printf("%d ",n-2);}

          else if((i==4||i==a-3)||(j==4||j==a-3)){printf("%d ",n-3);}

          else if((i==5||i==a-4)||(j==5||j==a-4)){printf("%d ",n-4);}

          else if((i==6||i==a-5)||(j==6||j==a-5)){printf("%d ",n-5);}

          else if((i==7||i==a-6)||(j==7||j==a-6)){printf("%d ",n-6);}

          else if((i==8||i==a-7)||(j==8||j==a-7)){printf("%d ",n-7);}
          
          else if((i==9||i==a-8)||(j==9||j==a-8)){printf("%d ",n-8);}


        //   else{printf("  ");}
          

      }
    printf("\n");

    }




}










//   printf("%d",n);
        //   if(i==1||i==a)
        //   {printf("%d ",n);}
        //   else if(j==1||j==a)
        //   {printf("%d ",n);}
           //  else if(i==3||i==a-2)
        //   {printf("%d ",n-2);continue;}
        //   else if(j==3||j==a-2)
        //   {printf("%d ",n-2);continue;}
