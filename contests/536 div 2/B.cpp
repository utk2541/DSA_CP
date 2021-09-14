#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll, ll>
int32_t mod = 1e9 + 7;


int32_t main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll c[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>c[i];
    map<ll,ll> b;
    for(ll i=0;i<n;i++) b[c[i]]+=a[i];
    while(m--){
        ll t,d;
        cin>>t>>d;
        ll cost=0;
        if(d<=a[t-1]) {cost=d*c[t-1]; b[c[t-1]]-=d;}
        else{
            cost+=(a[t-1])*c[t-1];
            d=d-a[t-1];
            b[c[t-1]]-=a[t-1];
            a[t-1]=0;
            ll cd=-1;
            for(auto it=b.begin();it!=b.end();it++){
                if(it->second!=0){
                    if(d>=it->second){
                    cost+=(it->second)*it->first;
                    d-=it->second;
                    it->second=0;
                    
                    }
                    else{
                        cost+=d*it->first;
                        it->second-=d;
                        d=0;
                    }
                    cd=0;

                }
                if(d==0) break;
            }
            if(d>0) cost=0;
            

        }
        cout<<cost<<endl;

    }
}