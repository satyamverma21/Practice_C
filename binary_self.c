#include<stdio.h>
int main()
{
 int hi=9 , lo=0 ,mid ,t;
 printf("target :");
 scanf("%d",&t);
 int arr[10]={12,23,45,56,67,78,89,91,95,99};

 while(lo<=hi)
 {  
     mid =(lo+hi)/2;

     if(arr[mid]==t){printf("index : %d",mid);break;}

     else if (arr[mid]>t){ hi=mid-1;}

     else{lo=mid+1;}
     
 } 



}