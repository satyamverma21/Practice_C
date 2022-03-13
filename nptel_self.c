#include<stdio.h>
int main()
{
    int n, num;
    int cur, pre, ppre;
    printf("enter size :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {   
        printf("enter :");
        scanf("%d", &num);
        if(num<0){continue;}
        ppre = pre;
        pre = cur;
        cur = num;

        if ((ppre * ppre) + (pre * pre) == (cur * cur))
        {
            printf("%d,%d,%d are trio \n", ppre, pre, cur);
        }
    }
}