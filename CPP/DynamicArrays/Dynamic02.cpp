#include<iostream>

using namespace std;

int main(){
    float *arr;
    int size;
    cout<<"Enter the floatting Point values"<<endl;
    cin>>size;
    arr = new float[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The Floatting point values are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}