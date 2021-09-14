#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        map<ll,ll> m;
        
        ll rat,siz;
        for(ll i=0;i<n;i++){
        cin>>siz>>rat;
            m[rat] = siz;
            

        }
        ll maxnum=0;
        ll i=0;
        for(auto it=m.begin();i<n;i++,it++){
            if(maxnum<=it->first && it->second<=x ){
                maxnum=it->first;
            }
        }

        cout<<maxnum<<endl;

    }
    return 0;
}
