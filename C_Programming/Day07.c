#include<stdio.h>

int main(){
    int a[10000],n;
    scanf("%d",&n);
    
    for(int i =0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i =n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}