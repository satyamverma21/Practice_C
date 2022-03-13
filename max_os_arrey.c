#include<stdio.h>
int main()
{
 int a,i,c ;
 printf("enter the size of arrey :");
 scanf("%d",&a);
 int arr[a];
 for ( i = 0; i < a; i++)
    {
     printf("enter %d index value :",i);
     scanf("%d",&arr[i]);    
    }

 c=0;

 for ( i = 0; i < a; i++)
  { if (c<=arr[i])
    {c=arr[i];}
  
  }
 
 printf("highest value : %d",c);
}
 

//  c=arr[0];
//  if(c>arr[1]){c=arr[1];}
//  if(c>arr[2]){c=arr[2];}
//  if(c>arr[3]){c=arr[3];}
//  if(c>arr[4]){c=arr[4];}
