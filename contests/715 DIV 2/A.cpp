#include<bits/stdc++.h>
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
            vector<ll> b,c;
            for(ll i=0;i<n;i++){
                if(a[i]%2==0) {
                    b.push_back(a[i]);

                }
                else c.push_back(a[i]);
            }
            for(ll i=0;i<c.size();i++) cout<<c[i]<<" ";
            for(ll i=0;i<b.size();i++) cout<<b[i]<<" ";
            cout<<endl;

        }
    return 0;
}
