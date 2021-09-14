#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a[4];
    map<ll,ll> b;
    for(ll i=0;i<4;i++) cin>>a[i];
    for(ll i=0;i<4;i++) b[a[i]]+=i;
    if(max(a[0],a[1])<min(a[2],a[3]) ||max(a[2],a[3])<min(a[0],a[1]) )
    cout<<"NO";
    else cout<<"YES";
    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}