#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
    int v1,v2,r1,r2,N;
    cin>>v1>>r1>>v2>>r2>>N;
    int angle = (abs(v2 - v1)) * N;
    double dist;
    if(angle % 360 == 0)
        dist = abs(r2-r1);
    else if(angle % 180 == 0)
        dist = r1 + r2;
    else{
        dist = sqrt((r1*r1) + (r2*r2));
    }

    cout<<fixed<<setprecision(2)<<dist<<endl;
    return 0;
}