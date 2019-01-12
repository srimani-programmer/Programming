#include<iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    string s[11] = {"even","odd","one","two","three","four","five",
    "six","seven","eight","nine"};

    for(int i=a;i<=b;i++){
        if((i>9) && (i%2 == 0)){
            cout<<s[0]<<endl;
        }else if((i>9) && (i%2 != 0)){
            cout<<s[1]<<endl;
        }else{
            cout<<s[i+1]<<endl;
        }
    }

    return 0;
}