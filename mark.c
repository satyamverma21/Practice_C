#include<stdio.h>

int main()
{ int mt ,eng , eco, bst , ac ,perc ;
printf("enter your marks of maths :");
scanf("%d",&mt);
printf("enter your marks of english :");
scanf("%d",&eng);
printf("enter your marks of a/c :");
scanf("%d",&ac);
printf("enter your marks of B.st :");
scanf("%d",&bst);
printf("enter your marks of economics :");
scanf("%d",&eco);

perc = (mt + eng + eco + bst +ac ) /5;

if (perc>=90){printf("your grade is 'O' with percentage '%d'",perc);}
else if (75<=perc && perc<90){printf("your grade is 'A+' with percentage '%d'",perc);}
else if (60<=perc && perc<75){printf("your grade is 'A' with percentage '%d'",perc);}
else if (45<=perc && perc<60){printf("your grade is 'B' with percentage '%d",perc);}
else if (33<=perc && perc<45){printf("your grade is 'C' with percentage '%d'",perc);}
else{printf("you are fail , you scored '%d' percentage",perc);}

 





}