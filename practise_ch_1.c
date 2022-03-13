#include<stdio.h>
void main(){
char c , ch = 291  ;
int a , x=33000 ,f, g ,st;
float b , y=3.4e100 ,i,j;

printf("#1 %d,%d,%d,%d \n\n",72,072,0x72,0X72); //72 58 114 114 
printf("#2 %d,%o,%d  \n \n",72,72,72 ); //72 110 72  

printf("#3 space occupied by ch = %d \n", sizeof(c) ); //1
printf("#3 space occupied by int = %d \n", sizeof(a)); // usualy 2 dont know why 4
printf("#3 space occupied by float = %d \n\n", sizeof(b) );//4


printf("#4 space occupied by ch = %d \n", sizeof(char) ); //1
printf("#4 space occupied by int = %d \n", sizeof(int)); // usualy 2 dont know why 4
printf("#4 space occupied by float = %d \n\n", sizeof(float) );//4


printf("#5 space occupied by '7' = %d \n", sizeof('7') ); //1
printf("#5 space occupied by 7 = %d \n", sizeof(7)); // usualy 2 dont know why 4
printf("#5 space occupied by 7.0 = %d \n\n", sizeof(7.0)); // 8 bcuz it is considered as double

printf("#6 %d , %d , %c \n\n",32770,ch,ch); //32770 , 35 , #

printf("#7 %d %c \n");//32770 #
printf("#7 %d %c \n\n");//32770 #

//x=33000  y=3.4e100 
printf("#8 x=%d y=%f \n",x,y);//x=33000 y=1.#INF00 
printf("#8 %d %d \n\n",sizeof(x) ,sizeof(y));//4 4

f= -3- -3;
g= -3- -(-3);
printf("#9 %d %d \n\n",f,g);// 0 -6

f=0;
f=3*4%5;
printf("#10 f=%d \n\n ",f);// f=2

f=0;
f=3+4-7*8/5%10;
printf("#11 f=%d \n\n ",f);// f=6

f=0;
f= -3 + 4-7*8/5%10; 
printf ("#12 f = %d \n\n",f);// f = 0

f=0;
f = 4%5 + 6%5; 
printf ("#13 f = %d \n\n",f);//f = 5 

f=0;
x = -3*-4 %-6/-5; 
printf ("#14 f = %d \n\n",x); //f = 0


printf ("#15 %d \n",4/3); //1
printf ("%d \n", 4/-3); //-1
printf ("%d \n",-4/3); //-1
printf ("%d \n\n",-4/-3);//1


printf ("#16 %d \n", 4% 3); //1
printf ("%d \n", 4%-3); //1
printf ("%d \n", -4 % 3); //-1
printf ("%d \n\n",-4%-3); //-1

// g=0; //#17
// i = 5, j = 2; 
// g= i%j; 
// printf ("%d", g); 


// f = 0;
// f = 3**4-7^8; 
// printf("f = %d",f); 


f=0;
f= 300 * 300/300; 
printf ("#19 f = %d \n\n",f); // f = 300


f=0;
i=1.5; 
f = 3; 
i = f/2 + f*8/f-f + i/3; 
printf ( "#20 i = %f \n\n", i); //#20 i = 6.500000

f=0,g=0,a=0,i=0.00;
f = 3, g = 4, a; 
i = 4.2; 
a = g*g/f + f/2*i + 2 + i; 
printf ("#21 a = %d \n\n", a); //#21 a = 15

f=0 ,g=0;
f = 2, g = 3, st; 
st = f*g/4-12/12+ 12/3*16/g; 
printf ("#22 st = %d \n\n", st); //#22 st = 21

f=0,g=0;
f = 5.999999; 
g = 5.000001; 
printf ("#23 f = %d g = %d \n\n", f, g);//#23 f = 5 g = 5

i=0.00;
i=4/2 ; 
printf("#24 %f %f \n\n",i,4/2); //#24 2.000000 0.000000


printf ("#25 %d %f \n ", 4,4); // #25 4 0.000000
printf ("#25 %d %f \n\n", 4.0,4.0);// #25 0 0.000000

i=0.00 , f= 0;
i = 4; 
f = 2; 
printf ("%f %d \n", f/i, f/i); 
printf ("%d %f \n\n",f/i,f/i); 


printf ("%d \n" ,sizeof(4) / sizeof (2.0)); 
printf ("%d \n\n", sizeof (2.0) / sizeof (4)); 


printf ("nn \n\n nn\n"); 
printf ("nn /n/n nn/n"); 

f=0,g=0;
f,g; 
scanf ("Enter values of f and g %d %d", &f, &g); 
printf ("f = %d g = %d", f,g);














}