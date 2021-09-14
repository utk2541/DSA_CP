#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define pii pair<int, int>
int32_t mod = 1e9 + 7;
ll INF=1000000000000000000;
vector<vector<pair<ll,ll>>> adj;
vector<bool> used;
void shortest_path(ll s, vector<ll> &d,vector<ll> &p){
    ll n = adj.size();
    d.assign(n,INF);
    p.assign(n,-1);
    d[s] = 0;
    using pii = pair<ll, ll>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        ll v = q.top().second;
        ll d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v]) {
            ll to = edge.first;
            ll len = edge.second;

            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}

void solveCase()
{
    ll n ,m;
    cin >> n >>m;
    adj.resize(n);
    used.resize(n,false);
    for(ll i=0;i<m;i++){
        ll e1,e2,w1;
        cin>>e1>>e2>>w1;
        adj[e1-1].push_back({e2-1,w1});
        adj[e2-1].push_back({e1-1,w1});
    }
    vector<ll> d;
    vector<ll> p;
    shortest_path(0,d,p);
    if(d[n-1]>=INF) cout<<-1;
    else{
        vector<ll> path;
        for(ll i=n-1;i!=0;i=p[i]) path.push_back(i);
        path.push_back(0);
        reverse(path.begin(),path.end());
        for(auto i : path) cout<<i+1<<" ";
    }
    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solveCase();
}