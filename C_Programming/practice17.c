#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j,sum =0;
    for(j=0;j<n;j++){
        sum = sum + arr[j];
    }
    printf("%d",sum);
    return 0;
}