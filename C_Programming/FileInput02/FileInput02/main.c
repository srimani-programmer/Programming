//
//  main.c
//  FileInput02
//
//  Created by Sri Manikanta on 06/06/18.
//  Copyright © 2018 Sri Manikanta. All rights reserved.
//

#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    
    fp = fopen("/Users/srimanikanta/Desktop/Python/IterativeStatements/ForLoop02.py", "r");
    
    while (1) {
        ch = fgetc(fp);
        if (ch == EOF) {
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}

