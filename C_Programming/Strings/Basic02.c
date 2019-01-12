//various ways to print a string

#include<stdio.h>

int main(){
    char name[] = "srimanikanta";

    int i = 0;
    while(name[i] != '\0'){
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    //we can also print using pointer variable that store string data...
  
    char *ptr;
    ptr   = name; //stores the base address of the string..

    while(*ptr != '\0'){ //if we take simple ptr variable then we will get run time error saying segmentation fault.
        printf("%c",*ptr);
        ptr++;        
    }
    /*"segmentation violation" or "segmentation fault." When you run your program and the system reports a
     "segmentation violation," it means your program has attempted to access an area of memory that it is not allowed to access.
      In other words, it attempted to stomp on memory ground that is beyond the limits that the operating system
       (e.g., Unix) has allocated for your program.*/
    printf("\n");

    return 0;
}