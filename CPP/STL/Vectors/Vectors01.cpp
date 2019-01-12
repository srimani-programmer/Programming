#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> val;
    val.push_back(10);
    val.push_back(20);
    val.push_back(30);
    val.push_back(40);
    val.push_back(50);
    val.pop_back(30);

    cout<<"The size of the Dynamic Array:"<<val.size()<<endl;
    for(int i=0;i<val.size();i++)
        cout<<val[i];

    return 0;
}