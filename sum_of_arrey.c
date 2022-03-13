#include<stdio.h>
int main()
{
 int a,i,c=0 ;
 printf("enter the size of arrey :");
 scanf("%d",&a);
 int arr[a];
 for ( i = 0; i < a; i++)
 {
     printf("enter %d index value :",i);
     scanf("%d",&arr[i]);    
 }
 for ( i = 0; i < a; i++){c=c+arr[i];}
  printf("%d",c);
}