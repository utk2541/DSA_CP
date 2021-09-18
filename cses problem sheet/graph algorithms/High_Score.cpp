#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
struct edge
{
    int a, b;
    ll c;
};
///////////
vector<vector<ll>> adj;
 
vector<bool> visited;
 
void dfs(ll v)
{
 
    visited[v] = true;
    for (ll u : adj[v])
    {
        if (visited[u] == false)
            dfs(u);
    }
}
 
/////////////////
void solveCase()
{
    int n, m;
    cin >> n >> m;
    vector<edge> e(m);
    adj.resize(n);
 
    for (int i = 0; i < m; i++)
    {
        int a,b;
        ll c;
        cin >> a >> b >> c;
        a--;
        b--;
        e[i].a = a;
        e[i].b = b;
        e[i].c = c;
        adj[a].push_back(b);
    }
    vector<ll> d(n, INT64_MIN);
    d[0] = 0;
    ll x = -1;
    vector<int> p(n , -1);
    vector<ll> fuckit;
    for (ll i = 0; i < n; i++)
    {
        x = -1;
        for (ll j = 0; j < m; j++)
        {
            // cerr<<e[j].b+1<<" "<<d[e[j].b]<<" "<<d[e[j].a]+e[j].c<<endl;
            if (d[e[j].a] > INT64_MIN)
            {
                if (((d[e[j].a] + e[j].c) > d[e[j].b]))
                {
 
                    d[e[j].b] = max(d[e[j].b], d[e[j].a] + e[j].c);
                    p[e[j].b] = e[j].a;
                    x = e[j].b;
                    if(i==n-1) fuckit.push_back(e[j].b);
                }
            }
        }
        //  cerr<<"#######"<<endl;
    }
    if (d[n - 1] != INT64_MIN && x == -1 && abs((d[n - 1])) < 5000000000000 )
        cout << d[n - 1];
    else
    {
 
        if (x != -1)
        {
            ll f = 0;
            for (auto k : fuckit)
            {
                
                    
                    x = k;
                    ll y = x;
                    for (ll i = 0; i < n; ++i){
                        y = p[y];
                    //cerr<<y<<endl;
                    }
                    vector<ll> path;
 
                    for (ll cur = y;; cur = p[cur])
                    {
                        path.push_back(cur);
                        if (cur == y && path.size() > 1)
                            break;
                    }
                    ll f1 = 0, f2 = 0;
                  visited.clear();
                    visited.resize(n);
                    dfs(0);
                    for (auto i : path)
                    {
                        if (visited[i] == true)
                            f1 = 1;
                        // cerr<<i+1<<" ";
                    }
                    for (auto i : path)
                    {
                        visited.clear();
                        visited.resize(n);
                        dfs(i);
                        if (visited[n - 1] == true)
                            f2 = 1;
                    }
                   //   cerr<<"*******\n"<<f1<<" "<<f2<<"\n*******\n";
                    if (f1 == 1 && f2 == 1)
                    {
                        f = 1;
                        break;
                    }
                    
                    //  cerr<<endl;
                
                
            }
            //   cerr<<d[n-1];
            if (f == 1)
                cout << -1;
            else
                cout << d[n - 1];
        }
        else
            cout << -1;
    }
 
    cout << "\n";
}
 
int32_t main()
{
 
    solveCase();
}