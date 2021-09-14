#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n, m;

    cin >> n >>m;
    vector<ll> k(n), c(m);
    for(ll i=0;i<n;i++) cin>>k[i];
    for(ll i=0;i<m;i++) cin>>c[i];
    sort(k.begin(),k.end(),greater<ll>());
    ll p=-1;
    ll cost=0;
    for(ll i=0;i<n;i++){
        if(p<(k[i]-1) && p<n-1){
            p++;
            cost+=c[p];

        }
        else cost+=c[k[i]-1];
    }
    cout<<cost;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}