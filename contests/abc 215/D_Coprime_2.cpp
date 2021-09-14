#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m;
    cin >> n >>m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll stuff=1;
    for(ll i=0;i<n;i++)stuff*=a[i];
    vector<ll> ans;
    for(ll i=1;i<=m;i++){
        if(__gcd(i,stuff)==1) ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(auto k : ans) cout<<k<<endl;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}