#include<stdio.h>
int main()
{
 int n ,i,a=0,b=1,c=0;
 printf("ENTER NUMBER : ");
 scanf("%d",&n);
for ( i = 0; i <n ; i++)
{
    a=b+c;
 printf("%d",a);

    c=b;
    b=a;
}
 


}