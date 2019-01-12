#include <stdio.h>


long long int factorial(int n);

int main(){
    
    int n;
    scanf("%d",&n);
   long long int fact = factorial(n);
    printf("%lld",fact);
    
    return 0;
}

long long int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}