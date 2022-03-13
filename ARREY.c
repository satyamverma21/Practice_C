// creatinng array 
#include<stdio.h>

int main()
{int i;
 int A[5];
 int B[5]={2,4,6,8,10};
 int C[5]={2,4};
 int D[5]={0};
 int E[]={2,4,6,8,10};

 for(i=0 ; i<5 ;i++)printf("%d ",B[i]);printf("\n");
 for(i=0 ; i<5 ;i++)printf("%d ",i[B]);printf("\n");
 for(i=0 ; i<5 ;i++)printf("%d ",*(D+i));printf("\n");

return 0;


}