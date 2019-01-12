#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;
    int size,num;
    char separator1;
    cin>>size>>separator1>>num;
    int count = 0;

    for(int i=0;i<size;i++){
        std::vector<int> dest;
        int value;
        std::cin >> value;
        if ( std::cin ) {
            dest.push_back( value );
            char separator;
            while ( std::cin >> separator >> value && separator == ',' ) {
            dest.push_back( value );
            }
        }
    }

    cout<<vec[0];

    return 0;
}