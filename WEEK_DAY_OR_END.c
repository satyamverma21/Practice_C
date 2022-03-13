#include<stdio.h>

int main()
{ int a ;
printf("number of day of week :");
scanf("%d",&a);
    switch(a)
    {
        case 1 : printf("weekday");break;
        case 2 : printf("weekday");break;
        case 3 : printf("weekday");break;
        case 4 : printf("weekday");break;
        case 5 : printf("weekday");break;
        case 6 : printf("weekend");break;
        case 7 : printf("weekend");break;
        default: printf("invalid");

    }
}