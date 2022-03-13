#include<stdio.h>

int main()
{
    
    int i ,j;
    int a=0,b=0,n;
    printf("enter size of arrey : ");
    scanf("%d",&n);
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {   printf("\n enter %d,%d value  ",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    


    for (i=0;i<n;i++)
    {
      for (j=i+1 ;j<n ; j++)
        {
          if(arr[i][j]!=0){ a++; }//check zero in up-side of diagonal
        }  
      for (j=0 ; j<i ; j++)
        {
          if(arr[i][j]!=0){ b++; }//check zero in low-side of diagonal 
        }
    }


    if((b==0)&&(a==0)){printf("2");}  
    else if(b==0){printf("1");}  
    else if(a==0){printf("-1");}  
    else{printf("0");}  
   
   
   
    return 0 ;

}
