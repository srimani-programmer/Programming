#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int year;
    cin>>year;
    cout<<ceilf(year/100) + 1;

    return 0;
}