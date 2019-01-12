#include<stdio.h>
#include<string.h>
void strrev(char *);
int main(){

    char str1[100] = "hello!";
    char str2[50];

    strrev(str1);
 //   printf("%s\n",str1);

    return 0;
}

void strrev(char str[]){
    int len = strlen(str);
    for(int i = len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}
