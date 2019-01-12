#include<stdio.h>

int main(){
    int a[1000],n,b[1000];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++){
        int sum = 0;
        sum = a[i] + b[i];
        printf("%d ",sum);
    }
    return 0;
}