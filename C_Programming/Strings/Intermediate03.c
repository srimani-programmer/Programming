#include<stdio.h>
#include<string.h>
void strCombine(char *src,char *des);
int main(){

    char str1[100] = "hello";//if we are trying to use pointer variable then we will get run time error saying bus fault
    char str2[20] = "world";

    strCombine(str1,str2);

    printf("%s\n",str1);

    return 0;
}

//this is my own function to combine two strings

void strCombine(char *src,char *des){
    while(*src!='\0')
    {
        src++;
    }
    while(*des!='\0'){
        *src = *des;
        src++;
        des++;
    }
   *src = '\0';
}