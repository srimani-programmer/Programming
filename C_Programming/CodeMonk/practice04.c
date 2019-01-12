#include<stdio.h>
#include<string.h>


int main(){
    int len;
    char str[100];

    scanf("%[^\n]",str);

    len = strlen(str);

    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
        printf("\n");
    return 0;
}