#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
    cin>>n;
    ll a[n-1] = {};
    for(ll i=0;i<n-1;i++)cin>>a[i];
    sort(a,a+n);
    ll num=n;
    for(ll i=0;i<n-1;i++){
        if(a[i]!=(i+1)){
            num=i+1;
            break;
        }
    }
    cout<<num;




    
    return 0;
}
