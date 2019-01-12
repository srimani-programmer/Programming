#include<iostream>

using namespace std;

int main(){
    int n;
    int a[50],b[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<n;i++){
        cin>>b[i];
    }
    double totalSum = 0.0;
    int sum = 0;
    for(int i=0;i<n;i++){
        totalSum = totalSum + (a[i] * b[i]);
        sum = sum + b[i];
    }
    double result = 0.0;
    result = totalSum/sum;
    cout.precision(1);
    cout<<fixed<<result<<endl;

    return 0;
}