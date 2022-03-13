// code to check upper triangle or lower triangle
//  note -- without using arreys

#include <stdio.h>
int main()
{
    int n; // size of arrey
    int num;
    int count = 0, count1 = 0; // count for lower triangle and count1 for upper triangle
    int element; //for self derived formula (^_^)

    printf("enter size of arrey : ");
    scanf("%d", &n);
    element = n * (n - 1); // condition for both

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("enter :");
            scanf("%d", &num);
            
            if ((i > j) && (num == 0)){count1++;}
            else if ((i < j) && (num == 0)){count++;}
           
        }
    }
    if ((count==element/2)&&(count1==element/2))
    {
        printf("it is both \n");
    }
    else if (count == element / 2)
    {
        printf("it is lower \n");
    }
    else if (count1 == element / 2)
    {
        printf("it is upper \n");
    }
    else{
        printf("it is upper \n");

    }

    printf("count : %d\n", count);
    printf("count1 : %d\n", count1);
}