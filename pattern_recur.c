#include<stdio.h>
void pattern(int n );
int main()
{
   int n ;
    printf("enter value of n :");
    scanf("%d",&n);
    pattern(n);
}

// void pattern( int n)   // without recursion
// {
//   for(int i=1;i<=n;i++)
//   {
//       for(int j=0 ; j<2*i-1; j++){printf("* ");}
  
//       printf("\n");
//   }
// }

void pattern(int n)   // with recursion
{
if (n==1){printf("*\n");return;}
pattern(n-1); 


for(int i=0 ; i<2*n-1; i++){printf("* ");}
printf("hii-%d",n);

printf("\n");

}