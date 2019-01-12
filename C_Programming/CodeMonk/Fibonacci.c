#include<stdio.h>


int main(){
    int n,a=0,b=1,c;

    scanf("%d",&n);

    if(a==0){
        printf("%d\t",a);
    }

    for(int i=0;i<n;i++){
        c = a+b;
        printf("%d\t",c);
        a = b;
        b++;
    }

    return 0;
}