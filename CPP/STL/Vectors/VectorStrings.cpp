#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    string s;
    vector <string> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    cout<<"The Array of Names are:"<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

        return 0;
}