// choose shape -ask for parameter or area -ask for basic requirement -print ans..
#include<stdio.h>

int main()
{// [a,b,c,d] are swiches for shapes [e,f] switch for area and parameter
 // [float] are for data input

    int a , b , c, d,e,f;
    float len ,br , he ,re ;
    char ch;
    printf("choose your shape :- \n enter 's' for square : ---------------- enter 'r' for rectangle : \n enter 'c' for circle : ---------------- enter 't' for triangle : \n");
    printf("\n character should in small letter : ");
    scanf("%c",&ch);

    printf("\n");

    if (ch=='s'){a=1;}
    else if (ch=='r'){b=1;}
    else if (ch=='c'){c=1;}
    else if (ch=='t'){d=1;}
    else{printf("entered character is not valid \n");}

    // i will simplify it later...

    printf(" you have choosed ");
    if(a==1)
        {

        printf(" SQUARE \n\n PRESS: \n\n----- 1 for area \n----- 2 for parameter \n ") ;
        printf("\n enter your choice : ");
        scanf("%d",&e);
        if(e==1){printf("\n FINDING AREA :-");a+=1;}
        else if(e==2){printf("\n FINDING parameter :-");a+=2;}
        else{printf("INVALID INPUT!!");}
       
        }
    else if(b==1)
        {

        printf(" RECTANGLE \n\n PRESS: \n\n----- 1 for area \n----- 2 for parameter ");
        printf("\n enter your choice : ");
        scanf("%d",&e);
        if(e==1){printf("\n FINDING AREA :-");b+=1;}
        else if(e==2){printf("\n FINDING parameter :-");b+=2;}
        else{printf("INVALID INPUT!!");}
        
        
        }
    else if(c==1)
        {

        printf(" CIRCLE \n\n PRESS: \n\n----- 1 for area \n----- 2 for circumfrence");
        printf("\n enter your choice : ");
        scanf("%d",&e);
        if(e==1){printf("\n FINDING AREA :-");c+=1;}
        else if(e==2){printf("\n FINDING circumfrence :-");c+=2;}
        else{printf("INVALID INPUT!!");}
        
        }
    else if(d==1)
        {

        printf(" TRIANGLE \n\n PRESS: \n\n----- 1 for area \n----- 2 for parameter");
         printf("\n enter your choice : ");
        scanf("%d",&e);
        if(e==1){printf("\n FINDING AREA :-");d+=1;}
        else if(e==2){printf("\n FINDING parameter :-");d+=2;}
        else{printf("INVALID INPUT!!");}

        }

    printf(" \n Please submit requirements in 'cm' only \n ");

    if (a==2 || a==3)
        {
        printf("\n Length of side is :");
        scanf("%f",&len);
        if(a==2) {printf("AREA IS : %.2f ",len*len);}
        else{printf("PARAMETER IS : %.2f",4*len);}
        }
    else if (b==2 || b==3)
        {
        printf("\n Length of side is :");
        scanf("%f",&len);
        printf("\n Breath of side is :");
        scanf("%f",&br);
        if(b==2) {printf("AREA IS : %.2f ",len*br);}
        else{printf("PARAMETER IS : %.2f",len+br+br+len);}
        }
   else if (c==2 || c==3) 
        {
        printf("\n RADIUS is :");
        scanf("%f",&re);
        if(c==2) {printf("AREA IS : %.2f ",3.14285*re*re);}
        else{printf("CIRCUMFRENCE IS : %.2f",2*3.14285*re);}
        }
   else if (d==2 || d==3)
        {printf("WORK IN PROGRESS");
        // printf("\n Length of side is :");
        // scanf("%f";len);
        // if(d==2) {printf("AREA IS : %f ",len*len);}
        // else{printf("PARAMETER IS : %f",4*len);}
        }



    






}






