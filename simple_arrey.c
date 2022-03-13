#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int sum =0, n,arr[10];
scanf("%d",&n);
for(int i =0 ;i<n;i++ ){scanf("%d",&arr[i]);}

for(int j =0 ;j<n;j++ ){sum= sum+arr[j];}

printf("%d",sum);

}

