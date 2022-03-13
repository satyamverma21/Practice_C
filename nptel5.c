//conjucative pythagoras tripals
#include<stdio.h>
int main(){

int cur , pre , ppre ;
int n , i ,count =0 ;
printf("value of n : ");//---------------------
scanf("%d",&n);

for(int i =0;i<n ;i++ )
{  
    scanf("%d",&cur);

    if (cur<=0){continue;}
    if (count == 0 ){ ppre=cur; count = 1 ;}
    else
    {
        if (count==1){ pre=cur; count = 2;}
        else
        {
            if((ppre*ppre)+(pre*pre)==(cur*cur))
                { printf("%d,%d,%d are trio \n",ppre,pre,cur);}
            
            ppre = pre ;
            pre = cur ;
                
        }
    }
} 

}


// int size ,left=0,count;
// int cur , past , last ;
// printf(" count of cur : ");
// scanf("%d",&size);

// for(int i =0;i<size ;i++ )
// {   
//     last=past;
//     past=cur;
//     printf("cur : ");
//     scanf("%d",&cur);
//     if(cur<0){continue;}
//     if((last*last)+(past*past)==(cur*cur))
//     {printf("%d,%d,%d are trio \n",last,past,cur);}
// }

// printf("cur : %d \n past : %d \n last : %d \n",cur,past,last);

// return 0 ;
