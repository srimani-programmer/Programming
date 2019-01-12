#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a[10000],items,charged,dislikeItem;
    cin>>items;
    cin>>dislikeItem;
    for(int i=0;i<items;i++){
        cin>>a[i];
    }
    cin>>charged;
    int sum = 0;
    for(int i=0;i<items;i++){
        sum = sum + a[i];
    }
   // cout<<"The before sum is:"<<sum<<endl;
    sum = abs(sum - a[dislikeItem]);
    sum = sum/2;
  //  cout<<"The sum is:"<<sum<<endl;
    int finalAmount = abs(sum - charged);

    if(sum == charged){
        cout<<"Bon Appetit";
    }else{
        cout<<finalAmount;
    }
 return 0;
}