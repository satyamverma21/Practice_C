#include<stdio.h>
int main()
{   int i , max =0, min , n;
    printf("enter the size of arrey : ");
 scanf("%d",&n);
  int arr[n];
    for ( i = 0; i < n; i++)
 {
     printf("enter %d index value :",i);
     scanf("%d",&arr[i]);    
 }
    for(i=0;i<n;i++)
    { if(min>=arr[i])
            {min=arr[i];}
      if(max<=arr[i])
            {max=arr[i];}
        
    }
    
    printf("%d %d",min, max) ;
}
    