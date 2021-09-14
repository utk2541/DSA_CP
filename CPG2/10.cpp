#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll a[2*n+1];
    for(ll i=0;i<2*n+1;i++) cin>>a[i];
    for(ll i=1,l=0;l<k && i<2*n+1;i+=2){
        if(abs(a[i]-a[i+1]>1) && abs(a[i]-a[i-1])>1){
        a[i]--;
        l++;
        }
        
    }
    for(ll i=0;i<2*n+1;i++) cout<<a[i]<<' ';
    return 0;
}
