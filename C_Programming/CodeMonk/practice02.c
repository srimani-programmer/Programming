//Binary array

#include<stdio.h>
#include<math.h>

int main(){
    int a[2500],n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int sum = 0;

    for(int i= n-1 ;i >=0;i--){
        sum = sum + (a[i]*(pow(2,(n-i-1))));
    }

    printf("%d",sum);

    return 0;
}