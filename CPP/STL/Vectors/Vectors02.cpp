#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arrSize;
    vector <int> vect;
    cin>>arrSize;
    int val;
    for(int i=0;i<arrSize;i++){
        cin>>val;
        vect.push_back(val);
    }
    cout<<"The Dynamic Array Elements are:"<<endl;
    for(int i=0;i<arrSize;i++){
        cout<<vect[i]<<endl;
    }
    
    return 0;
}