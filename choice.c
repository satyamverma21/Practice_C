#include<stdio.h>

int main()
{   
    int choice ,a,b;
    printf("  ENTER \n 1 FOR EDDITION \n 2 FOR SUBTTRACTION \n 3 FOR MULTIPLICATI0N \n 4 FOR DIVITION \n 5 FOR MODULAS \n");
    scanf("%d",&choice);
    printf("enter first value :-");
    scanf("%d",&a);
    printf("enter second value :-");
    scanf("%d",&b);

  switch (choice)
  {
      case 1 :printf("sum is %d", a+b);break;
      case 2 :printf("difference is %d", a-b);break;
      case 3 :printf("product is %d",a*b);break;
      case 4 :printf("division is %d ",a/b);break;
      case 5 :printf("modulas is %d ",a%b);break;
      default : printf("please enter valid input ");break;



  }
}