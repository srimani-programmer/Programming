#include<stdio.h>

int main(){

    char name[25];
//this is one type of taking input from prompt 
    printf("Enter you name:\n");
    scanf("%s",name);
    printf("Hello %s\n",name);

//using pointer variable we can also store the string data..

  char *ptr = "hey this is sriManikanta";

  printf("%s\n",ptr);
  printf("%ld\n",sizeof(ptr));

  //usage of puts and gets function..

  char qualification[20];

  puts("What is your qualification?\n");

  //gets(qualification);
 //usage of gets() is unsafe

  puts("that's great\n");



    return 0;
}