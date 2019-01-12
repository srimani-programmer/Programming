#include<stdio.h>
#include<stdlib.h>
int main(){
    int val1,val2;
    int *p1,*p2;

    scanf("%d%d",&val1,&val2);
    p1 = &val1;
    p2 = &val2;

    printf("%d\n",*p1 + *p2);
    printf("%d\n",abs(*p1 - *p2));

    return 0;
}

