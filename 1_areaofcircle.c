#include<stdio.h>

int main() // area of circle and vol of cylinder
{
 int r ,h,area_circle ,vol_cylinder ;
 printf("enter the radius for circle and cylinder :");
 scanf("%d",&r);
 printf("enter the height of cylinder :");
 scanf("%d",&h);
 area_circle = 22/7*r*r; 
 vol_cylinder= area_circle*h ;
 printf("area of circle is : %d \n volume of cylinder is : %d",area_circle,vol_cylinder);
 

}