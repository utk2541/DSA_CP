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
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        b[a[i]]=i;
    }
    auto it=b.begin();
    for(ll i=0;i<n-2;i++){
        it++;
    }
    cout<<it->second+1;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}