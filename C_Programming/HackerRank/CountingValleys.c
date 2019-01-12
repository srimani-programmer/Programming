#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int seaLevel = 0;
    int hikeValue = 0;

    for(int i=0;i<n;i++){
       if(a[i] == 'U')
        seaLevel++;
       if(a[i] == 'D')
        seaLevel--;

        if(seaLevel == 0 && a[i] == 'U')
            hikeValue++;
    }
    printf("%d\n",hikeValue);
    return 0;
}