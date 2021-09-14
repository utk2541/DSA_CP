#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
vector<bool> v;
vector<ll> ans;
vector<vector<ll>> adj;
void dfs(ll t){
    v[t]=true;

    for(auto u : adj[t]){
       if(v[u]==false)
        dfs(u);
    }
}
void find_comp(ll n){
    
    v.resize(n,false);
    for(ll i=0;i<n;i++){
        if(!v[i]){
           
            dfs(i);
            ans.push_back(i);
        }
    }
   
}
void solveCase()
{
    ll n,m;
    cin>>n>>m;
    adj.resize(n);
    v.resize(n,false);
    
    for(ll i=0;i<m;i++){
        ll k1, k2;
        cin>>k1>>k2;
        adj[k1-1].push_back(k2-1);
        adj[k2-1].push_back(k1-1);
    }
    find_comp(n);
    cout<<ans.size()-1<<endl;
    for(ll i=0;i<ans.size()-1;i++){
        cout<<ans[i]+1<<" "<<ans[i+1]+1<<endl;

    }
     v.clear();
 ans.clear();
 adj.clear();
}

int32_t main()
{
    
        solveCase();
}