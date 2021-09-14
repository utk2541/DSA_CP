#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
bool comp(pair<ll,ll> a,pair<ll,ll> b){
    if(abs(a.first)+abs(a.second)<abs(a.first)+abs(a.second)) return true;
    if(abs(a.first)+abs(a.second)==abs(a.first)+abs(a.second)){
        
    }
}
void solveCase()
{
    ll n = 0;
    cin >> n;
    pair<ll,ll> a[n];
    for(ll i=0;i<n;i++){ cin>>a[i].first; a[i].second=i+1;}

    ll ans=n+(n-1);
    sort(a,a+n,comp);

    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}