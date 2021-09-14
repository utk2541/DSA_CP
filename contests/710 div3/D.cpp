#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        map<ll,ll> s;
        for(ll i=0;i<n;i++){
            s[a[i]]++;
        }
        ll maxnum=0;
        for(auto itr = s.begin();itr != s.end();itr++){
            if(itr->second>maxnum){
                maxnum=itr->second;
            }
        }
        ll num=n-maxnum;
        if(num>maxnum){
            
            cout<<n%2<<endl;
        }
        else{
            cout<<maxnum-num<<endl;
        }

    }
    
    return 0;
}
