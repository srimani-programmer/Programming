#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int a,b;
    int *p1,*p2;
    cin>>a>>b;
    p1 = &a;
    p2 = &b;
    cout<<*p1 + *p2<<endl;
    cout<<abs(*p1 - *p2)<<endl;

    return 0;
}