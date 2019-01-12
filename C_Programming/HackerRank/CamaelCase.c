#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a[100000];
    scanf("%s",a);
    int len = strlen(a);
    int count = 1;
    for(int i=0;i<len;i++){
        if(isupper(a[i])){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}