#include<stdio.h>

int main() // area of rectangle
{ 
    int length , breath ,area ;
    printf("enter the length : ");
    scanf("%d",&length);
    printf("\n enter the breath : ");
    scanf("%d",&breath);
    area = length*breath;
    printf("area is : %d ",area);
    return 0;
}