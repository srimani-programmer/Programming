#include<iostream>
using namespace std;

int main(){
    int a[10000];
    int n,noOfSwaps = 0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
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
    cout<<"Array is sorted in "<<noOfSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;

    return 0;
}