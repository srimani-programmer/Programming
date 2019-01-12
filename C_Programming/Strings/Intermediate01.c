//working with string length using predefined and userdefined functions..

#include<stdio.h>
#include<string.h>

int strLength(char *str);
int main(){

    char source[] = "sriManikanta";
    char destination[] = "Good Programmer";

    int len1 = strlen(source);
    int len2 = strlen(destination);

    printf("%d\n",len1);

    printf("%d\n",len2);

    int len3 = strLength(source);
    int len4 = strLength("hii");

    printf("My own stringlenth Function value:%d\n",len3);
    printf("My own stringlenth Function value:%d\n",len4);

    return 0; 
}
//this function will work as same the strlen()..
int strLength(char *str){
    int len = 0;

    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}