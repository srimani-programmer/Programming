#include<iostream>

using namespace std;

int main(){
    int a[10],n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        int rev = 0;
        int num = a[i];
        while(num!=0){
            rev = rev * 10;
            rev = rev + n%10;
            if(rev!=0){
                if(a[i]%rev == 0){
                    count++;
                }
            }
            num = num/10;
        }
        cout<<count<<endl;
    }
    return 0;
}