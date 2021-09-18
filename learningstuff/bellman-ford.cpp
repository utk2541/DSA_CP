#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
struct edge{
    ll a,b, cost;
};
const ll INF = 1000000000000000;
void solveCase()
{
    ll n ,m,v;
    cin >> n >>m>>v;
    vector<edge> e;
    vector<ll> d(n,INF);
    d[v]=0;
    for(ll i=0;i<n-1;i++)
        for(ll j=0;j<m;j++){
            if(d[e[j].a]<INF){
                d[e[j].b] = min(d[e[j].b],d[e[j].a]+e[j].cost);
            }
        }

    cout << "\n";
}

int32_t main()
{
    solveCase();
}