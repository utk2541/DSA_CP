#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
vector<vector<ll>> d;
ll const INF = 1000000000000;
void floydwarshall(ll n){
    for(ll k=0;k<n;k++){
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(d[i][k] < INF && d[k][j] <INF)
                d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
            }
        }

    }
}
vector<pair<ll,ll>> pairs_with_no_shortest_path(ll n){
    vector<pair<ll,ll>> pp;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            for(ll t=0;t<n;t++){
                if(d[i][t]<INF && d[t][j]<INF && d[t][t]<0){
                    d[i][j]= -INF;
                    pp.push_back({i,j});
                }
            }
        }
    }
    return pp;
}
int32_t main()
{   ll n;
    cin>>n;
    floydwarshall(n);
        
}