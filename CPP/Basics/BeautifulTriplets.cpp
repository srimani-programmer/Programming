#include<iostream>

using namespace std;

int main(){
    int a[10000],n,d;
    cin>>n;
    cin>>d;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count =0;

    /* for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=2;k<n;k++){
                if((i<j<k) && (a[j] - a[i] == d) && (a[k] - a[j] == d)){
                        count++;
                }
            }
        }
    }*/

    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[j] - a[i] == d){
                for(int k=2;k<n;k++){
                    if(a[k] - a[j] == d){
                        count++;
                    }
                }
            }
        }
    }

    cout<<count;

    return 0;
}