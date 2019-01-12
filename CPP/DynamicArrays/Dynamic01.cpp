#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int *a; 
    a = new int[size];

    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"The array Elements are:"<<endl;
    for(int i=0;i<size;i++)
        cout<<a[i]<<endl;

        return 0;

}