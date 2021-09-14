#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    map<ll,ll> b;
    for(ll i=0;i<n;i++){
        b[a[i]%k]++;
    }
    ll count=0;
    for()
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}