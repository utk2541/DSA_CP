#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase( ll t)
{
    ll n ,c;
    pair<ll,ll> intervals[n];
    
    for(ll i=0;i,n;i++) cin>>intervals[i].first>>intervals[i].second;
    ll min=intervals[0].first;
    for(ll i=0;i<n;i++){
        if(min<intervals[i].first) min=intervals[i].first;
    }

    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    ll num=t;
    while (t--)
        solveCase(num-t);
}