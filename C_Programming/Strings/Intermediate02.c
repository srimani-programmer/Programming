//this program deals about the string copy

#include<stdio.h>
#include<string.h>

void strCopy(char *destination,const char *source);

int main(){

    char *p = "Hello";
    char *q;
    strcpy(q,p);

    printf("Initial string:%s\n",p);
    printf("Final string:%s\n",q);

    char *src = "manikanta";
    char *des;

    strCopy(des,src);

    printf("Initial string:%s\n",src);
    printf("Final string:%s\n",des);


}

void strCopy(char *destination,const char *source){

    while(*source != '\0'){

        *destination = *source;
        source++;
        destination++;
    }

    *destination = '\0';
}