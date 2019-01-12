#include<stdio.h>

int main(){

    int pcount = printf("hello world\n");
    //printf() always returns the value that the no of characters that are sucessfully returned on the screen

    printf("%d\n",pcount);

    int sample,sample1;

    int scount = scanf("%d%d",&sample,&sample1);
    //scanf function always return the value i.e no of arguments that is entered on output..

    printf("%d\n",scount);

    return 0;

}