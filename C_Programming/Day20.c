#include<stdio.h>

int main(){
    int a[10000];
    int n,noOfSwaps = 0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                noOfSwaps++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",noOfSwaps);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[n-1]);

    return 0;
}