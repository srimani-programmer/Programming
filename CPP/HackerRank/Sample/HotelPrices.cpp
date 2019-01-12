#include<iostream>

using namespace std;

int main(){
    int n;
    string s;
    int bedRooms,bathRooms;
    cin>>n;
    int apartMentCount = 0,StandardCount = 0;
    for(int i=0;i<n;i++){
        cin>>s;
        cin>>bedRooms>>bathRooms;
        if(s.length() == 8){
            int bedPrice = 50 * bedRooms;
            int bathRoomPrice = 100 * bathRooms;
            StandardCount = bedPrice + bathRoomPrice;
            cout<<StandardCount;
        }
        if(s.length() == 9){
            int p1 = 100 * bathRooms;
            int p2 = 100 * bedRooms;
            int apartMentCount = p1 + p2;
            cout<<apartMentCount;
        }
    }
    cout<<apartMentCount + StandardCount;

    return 0;
}