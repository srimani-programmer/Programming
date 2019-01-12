#include<stdio.h>
#include<string.h>

int main(){

    char string[] = "sample string";//hii can be internally converted to {'h','i','i','\0'} so the size will be 4
    //by default the size of string is allocated to unsigned long int 
    printf("%s\n",string);//this will print string directly
    //for printing the string we generally use %s symbol for character %c

    //if we want to print string character by character then folow the method
    int i = 0;
    while(string[i] !='\0'){
        printf("%c",string[i]);
        i++;
    }
    printf("\n");
    printf("The size of the taken string is %ld\n",sizeof(string));

    return 0;
}