#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[j];
        }
        int catA = abs(a[2] - a[0]);
        int catB = abs(a[2] - a[1]);

    if(catA == catB){
        cout<<"Mouse C"<<endl;
    }else if(catA > catB){
        cout<<"Cat B"<<endl;
    }else{
        cout<<"Cat A"<<endl;
    }
    }

    return 0;
}

