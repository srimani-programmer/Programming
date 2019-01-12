#include<stdio.h>
#include<string.h>

int main(){
    char str[20],str1[20];
    int len1,len2;

    scanf("%s",str);
    scanf("%s",str1);

    len1 = strlen(str);
    len2 = strlen(str1);

   // int same = 0,different = 0;

    if(len1 > len2){
        for(int i =0 ; i<len1;i++){
            for(int j=0;j<len2;j++){
                if(str[i] == str1[j]){
                    printf("%c",str[i]);
                }
            }
        }
    }else{
        for(int i = 0;i<len2;i++){
            for(int j=0;j<len1;j++){
                if(str[i]==str1[j]){
                    printf("%c",str[i]);
                }
            }
        }
    }
        //printf("%d\n",same);
        //printf("%d\n",different);

    return 0;
}