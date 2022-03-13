#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a ,i ,b,c ;
 printf("enter the size of arrey : ");
 scanf("%d",&a);
  int arr[a];
 for (i=0 ; i<a ;i++)//scanning arrey
 {printf("enter the %d value of arrey : ",i+1);
 scanf("%d",&arr[i]);}
 
 printf("which number you want to search : ");//nuber for seearch
 scanf("%d",&b);
 
 
  for (i=0 ; i<a ;i++)
  {if (arr[i]==b){printf("value exist at %d index",i);break;}}

 
 
}


