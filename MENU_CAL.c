#include<stdio.h>
#include <stdlib.h>
int main()
{
 int a , b ,ch ;
 do
    {
     printf("\n enter choice\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Modulas \n6.exit\n");
     scanf("%d",&ch);
     printf("enter two numbers :");
     scanf("%d%d",&a,&b);

 switch (ch)
     {
     case 1:printf("Addition :%d",a+b); break;
     case 2:printf("subtraction :%d",a-b); break;
     case 3:printf( "multiplication :%d",a*b); break;
     case 4:printf( "division :%d",a/b); break;
     case 5:printf( "modulas:%d",a%b); break;
     case 6:exit(0);
     default:printf("invalid!!!");
    
     }

    }while (1);

return(0);
    
}


