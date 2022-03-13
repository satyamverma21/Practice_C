#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxand=0 , maxor= 0, maxxor=0;
  for(int i =1;i<5;i++)
  {
     for(int j =i+1;j<=5;j++)
        { 
            
            if((i&j)<k && (i&j)>maxand){maxand =(i&j); }
            if((i|j)<k && (i|j)>maxor){maxor =(i|j); }
            if((i^j)<k && (i^j)>maxxor){maxxor =(i^j); }
       printf("%d%d\n",i,j);

    
            
        }
    }
    //    printf("%d\n%d\n%d",maxand,maxor ,maxxor);

}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
