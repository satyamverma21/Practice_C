//binary seaarch
#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8};
    int l=0,m,h=9;
    int t=2,c=0;  //target--t
    while(l<=h)
    {
        m=(l+h)/2;
        if(arr[m]==t)
        {
            c++;
            break;
        }
        else if(arr[m]>t)
        {
            h=m-1;
        }
        else
          l=m+1;
    }
    if(c!=1)
      printf("element not found");
    else
      printf("element found");
}
