//matrix
#include<stdio.h>
int main(){

int m , n ,row= 0, col=0 ,rowsum=0,total=0;
int num;
printf("enter size or row and colomn of matrix : ");
scanf("%d%d",&m,&n);

while(row<m){
  while (col<n)
    { 
      printf("enter - ");
      scanf("%d",&num);
      rowsum += num;
      col++;  
    }
 printf("row sum : %d\n",rowsum);
 col=0;//-------------------------------------------------
 total += rowsum*rowsum;
 rowsum=0;//-----------------------------------------
 row++;
}
 printf("total sum : %d",total);
 return 0 ;
}