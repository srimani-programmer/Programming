#include<iostream>

using namespace std;

int main(){
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<n-1;j++){

            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                for(int k=0;k<n;k++){
                    cout<<a[k]<<" ";
                }
            }
            cout<<endl;
        }
    }

        

    return 0;
}