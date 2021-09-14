#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    map<ll,ll> b;
    ll count=0;
    set<pair<ll,ll>> c;
    for(ll i=0;i<n;i++){ cin>>a[i]; b[a[i]]=1;}
    for(ll i=n-1;i>=0;i--){
        for(ll j=min(a[i],(2*n)/a[i])+1;j<(max(a[i],(2*n)/a[i]));j++){
            if(b[j]>0) c.insert({min(a[i],j),max(a[i],j)});
        }
    }
    cout<<c.size();
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}