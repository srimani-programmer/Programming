#include<stdio.h>

int main(){
    int a[10][10],n;
    scanf("%d",&n);

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
   for(int i= 0;i<n;i++){
       for(int j=0;j<n;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }

    return 0;
}