#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
vector<vector<ll>> adj;
vector<vector<ll>> d;
ll const INF=200000000;
void solveCase()
{
    ll n ,m;
    cin >> n >>m;
    adj.resize(n);
    d.resize(n,vector<ll>(n,INF));
    for(ll i=0;i<m;i++){
        ll e1,e2,w;
        cin>>e1>>e2>>w;
        e1--;e2--;
        d[e1][e2]=min(d[e1][e2],w);
        d[e2][e1]=min(d[e2][e1],w);
    }
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}