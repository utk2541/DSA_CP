#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
const ll INF = 100000000000000;
vector<vector<pair<ll,ll>>> adj;

void dijkstra(ll s,vector<ll> & d,vector<ll> & p){  //d= distances , p = predecessors
    ll n=adj.size();
    d.assign(n,INF);
    p.assign(n,-1);
    vector<bool> u(n,false);
    d[s] = 0;
    for(ll i=0;i<n;i++){
        ll v=-1;
        for(ll j=0;j<n;j++){
            if(!u[j] && (v==-1 || d[j]<d[v])){
                v=j;
            }

        }
        if(d[v]==INF) break;
        u[v]= true;
        for(auto e : adj[v]){
            ll to = e.first;
            ll len = e.second;
            if(d[v]+len < d[to]){
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

vector<ll> restore_path(ll s,ll t,vector<ll> const& p){
    vector<ll> path;
    for(ll v=t;v!=s;v=p[v]) path.push_back(v);
    path.push_back(s);
    reverse(path.begin(),path.end());
    return path;
    
}

int32_t main()
{
   
     
}