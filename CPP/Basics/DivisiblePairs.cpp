#include<iostream>

using namespace std;

int main(){
    int a[100],n,k;
    cin>>n;
    cin>>k;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count = 0;

   /* for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if((a[i]<a[j]) && ((a[i]+a[j])%k == 0)){
                count++;
            }
        }
    }*/
    for(int i = 0 ; i <= n; i++){

    for(int j = 0; j < n; j++ ){

        if(i < j){

            if((a[i]+a[j])%k == 0){
                count++; 

            }
        }
    }
}

    cout<<count;


    return 0;
}