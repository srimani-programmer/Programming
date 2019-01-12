#include<iostream>

using namespace std;

int main(){
    int a[1000001],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int midvalue = (n-1)/2;
    cout<<a[midvalue];

    return 0;
}