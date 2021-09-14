#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll, ll>
int32_t mod = 1e9 + 7;
vector<vector<pair<ll,ll>>> adj;
ll INF=999999999999969999;


void shortest_path(ll s,vector<ll> & d, vector<ll> & p){
    ll n = adj.size();
    d.assign(n,INF);
    p.assign(n,-1);
    d[s]=0;
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push({0,s});
    while(!pq.empty()){
        ll d_v= pq.top().first;
        ll v = pq.top().second;
    
        pq.pop();
        if(d_v!=d[v]) continue;
        for(auto e : adj[v]){
            ll to = e.first;
            ll len = e.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                pq.push({d[to], to});
            }
        }
    }
} 


void solveCase()
{
    ll n ,m,q;
    cin >> n >> m >>q;
    adj.resize(n);
   
    
    for(ll i=0;i<m;i++){
        ll e1,e2,w;
        cin>>e1>>e2>>w;
        adj[e1-1].push_back({e2-1,w});
       adj[e2-1].push_back({e1-1,w});
    }
    for(ll i=0;i<q;i++){
        ll a,b;
        vector<ll> d,p;
        cin>>a>>b;
    shortest_path(a-1,d,p);
    if(d[b-1]==INF) cout<<-1;
    else cout<<d[b-1];
    
    cout << "\n";
    }
    adj.clear();
 
}

int32_t main()
{
    solveCase();
}