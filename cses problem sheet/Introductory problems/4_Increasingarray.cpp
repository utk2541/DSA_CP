#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll sum=0;
    for(ll i=1;i<n;i++){
        if(a[i]<a[i-1]){ sum+=(a[i-1]-a[i]); a[i]=a[i-1];}

    }
    cout<<sum;
    
    return 0;
}
