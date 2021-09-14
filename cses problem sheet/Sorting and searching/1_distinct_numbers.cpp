#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        map<ll,ll> a;
        ll n;
        cin>>n;
        ll b[n];
        for(ll i=0;i<n;i++) cin>>b[i];
        for(ll i=0;i<n;i++){
            a[b[i]]++;
        }
        ll count=0;
        for(auto i=a.begin();i!=a.end();i++){
             count++; 
        }
        cout<<count;


    return 0;
}
