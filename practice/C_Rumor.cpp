#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

vector<vector<ll>> g;
vector<bool> used;
vector<ll> comp;
void dfs(int v){
    used[v] = true;
    comp.push_back(v);
    for(ll i=0;i< g[v].size();i++){
        ll to = g[v][i];
        if(!used[to]) dfs(to);
    }
}
ll find_comp( ll n,vector<ll> cost){
    for(ll i=0;i<n;i++){
        used[i]=false;
    }
    ll tc=0;
    for(ll i=0;i<n;i++){
        if(!used[i]){
            comp.clear();
            dfs(i);
           ll min=1000000000000;
            for(ll j=0;j<comp.size();j++) { if(cost[comp[j]]<min) min=cost[comp[j]]; }
           if(min!=1000000000000) tc+=min;
        }
    }
    return tc;
}
void solveCase()
{
    ll n ,m;
    cin >> n >>m;
    g.resize(n);
    used.resize(n,false);
    vector<ll> cost(n);
    for(ll i=0;i<n;i++) cin>>cost[i];
    for(ll i=0;i<m;i++){
        ll e1,e2;
        cin>>e1>>e2;
        e1--; e2--;
        g[e1].push_back(e2);
        g[e2].push_back(e1);
    }
    ll ans = find_comp(n,cost);
    cout<<ans;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}