// #include <stdio.h>
// int main()
// {
//     int num, count, get;
//     int a = -1, b ;

//     while (num != -1)
//     {
//         printf("enter num : ");
//         scanf("%d", &num);
//         if(num>a){b=a ; a=num;}
//     }
//     printf("%d",b);
// }
#include <stdio.h>
int main()
{
    int num, count=0, get;
    int a = -1, b ;

    while (num != -1)
    {
     //   printf("enter num : ");
        scanf("%d", &num);
      
        if(num>a)
        {
         b=a ;
         a=num;
         count++;
         printf("count :%d\n",count);
        
        }
    }
  if(count>=2){printf("%d",b);}
  else{printf("0");}
}