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
             map<ll,ll> b;
             for(ll i=0;i<n;i++){

                 b[a[i]-i]++;
             }
             vector<ll> c;
            
             for(auto it=b.begin();it!=b.end();it++){
                 if((it->second)>1) c.push_back((it->second)*(it->second-1)/2);
                

             }
             ll max=0;
             for(ll i=0;i<c.size();i++) max+=c[i];
             cout<<max<<endl;


         }
    return 0;
}
