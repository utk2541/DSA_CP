#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,k ;
    cin >> n >> k;
    char c[k];
    ll a[k];
   map<ll,ll> b;
    for(ll i=0;i<k;i++){
        cin>>c[i]>>a[i];
        b[a[i]]=i+1;
    }
    ll ans=1,lcount=0,rcount=0;
    for(auto i : b){
        if(c[i.second-1]=='L'){
            ans=(ans%998244353)*(max((i.first-lcount),(ll)1)%998244353);
            lcount--;
        }
        if(c[i.second-1]=='R'){
            ans=(ans%998244353)*(max((n-i.first-1-rcount),(ll)1)%998244353);
            rcount--;
        }
    }
    

    cout<<ans;

    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}