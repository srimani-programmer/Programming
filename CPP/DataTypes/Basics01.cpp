#include<iostream>

using namespace std;

int main(){
    unsigned short a;
    unsigned int i;
    unsigned long l;
    unsigned long long l1;

    cout<<"Enter the value for Unsigned Short:";
    cin>>a;
    cout<<"Enter the value for unsigned int:";
    cin>>i;
    cout<<"Enter the value for unsigned long:";
    cin>>l;
    cout<<"Enter the value for unsigned long long:";
    cin>>l1;
    cout<<"The Datatype values are and sizes are:";

    cout<<"unsigned Short:"<<a<<" "<<sizeof(a)<<endl;
    cout<<"unsigned int:"<<i<<" "<<sizeof(i)<<endl;
    cout<<"unsigned long:"<<l<<" "<<sizeof(l)<<endl;
    cout<<"unsigned long long:"<<l1<<" "<<sizeof(l1)<<endl;

    return 0;
}