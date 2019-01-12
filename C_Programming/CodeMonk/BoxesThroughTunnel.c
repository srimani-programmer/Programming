#include<stdio.h>

int main(){
    int noOfBoxes;
    scanf("%d",&noOfBoxes);
    for(int i=0;i<noOfBoxes;i++){
        int length = 0,width = 0,height = 0;
        scanf("%d%d%d",&length,&width,&height);
        if(height < 41)
            continue;
        else{
            printf("%d\n",(length * width * height));
        }

    }

   return 0;

}