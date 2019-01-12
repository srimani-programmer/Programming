#include <iostream>
using namespace std;
int main() 
{
    int i, n, k, maxk = 0, max = 0;
    cin >> n;
    int a[100]={0};      //Array containing frequency of integers
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        //maxk stores the value of largest integer
        if(k > maxk)
            maxk = k;
        a[k]++;          //Update the frequency of the integer k
    }
    //i < maxk is used in place of i < n-1
    for(i=0;i<maxk;i++)
        if(a[i]+a[i+1]> max) 
            max = a[i]+a[i+1];
    
    cout<<max;
    return 0;
}