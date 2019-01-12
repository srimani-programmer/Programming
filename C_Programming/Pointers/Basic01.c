// The output of this program can be different
// in different runs. Note that the program
// prints address of a variable and a variable
// can be assigned different address in different
// runs.
#include <stdio.h>
 
int main()
{
      int x;//Normal variable
    
      int* ptr;

    x = 15;

    // Prints address of x
    printf("%d\n", x);

    printf("%x\n", x);

    printf("%X\n", x);

    printf("%o",x);

    printf("%O\n", x);

 
    return 0;
}