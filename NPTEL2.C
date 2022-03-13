// LONGEST INCRESING SEQUENCE 1
// p = previous num // c = current num 
#include<stdio.h>
int main(){
int m_len = 0  ;
int c,p,len=1;
while(c!=(-1))
{printf(" enter num :"); 
scanf("%d",&c);
if(c>p){len++;}
else{len=1;} // reset counting 
p=c;
printf("len is %d",len);
if(m_len<len){m_len=len;}
}
printf("max contiguous length was : %d",m_len);
return 0;
}
        
