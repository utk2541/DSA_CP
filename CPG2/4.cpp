#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll a[m],sum=0;
    for(ll i=0;i<m;i++) cin>>a[i]; sum=a[0]-1;
    
    for(ll i=1;i<m;i++){
        if(a[i]<a[i-1]) sum+=n-a[i-1]+a[i];
        else{
            sum+=a[i]-a[i-1];
        }
        
    }
    cout<<sum;


    return 0;
}
