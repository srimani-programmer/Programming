#include<stdio.h>
int maxValue(int v1,int v2,int v3,int v4);
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int res = maxValue(a,b,c,d);
    printf("%d",res);
    return 0;
}

int maxValue(int v1,int v2,int v3,int v4){
    if(v1 > v2 && v1 > v3 && v1 > v4)
        return v1;
    else if(v2 > v1 && v2 > v3 && v2 > v4)
        return v2;
    else if(v3 > v1 && v3 > v4 && v3 > v2)
        return v3;
    else
        return v4;
}