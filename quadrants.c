#include<stdio.h>

int main()
{
int x,y ;
printf("enter the value of x-axis");
scanf("%d",&x);
printf("enter the value of y-axis");
scanf("%d",&y);

if (x==0 && y ==0)
{printf("point (%d,%d) lie at origin",x,y);}

else if (x==0 && y !=0)
{printf("point (%d,%d) lie y-axis",x,y);}

else if (x!=0 && y ==0)
{printf("point (%d,%d) lie at x-axis",x,y);}

else if (x >0 && y >0)
{printf("point (%d,%d) lie in first quadrant",x,y);}

else if (x <0 && y >0)
{printf("point (%d,%d) lie in second quadrant",x,y);}

else if (x <0 && y <0)
{printf("point (%d,%d) lie in third quadrant",x,y);}

else if (x >0 && y <0)
{printf("point (%d,%d) lie in forth quadrant",x,y);}



}