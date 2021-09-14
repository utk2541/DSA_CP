#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,m;
    cin >> n >>m;
    vector<vector<ll>> adj(n);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
     queue<ll> q;
    
    vector<bool> used(n);
    q.push(0);
    used[0]=true;
    vector<ll> level;
    level.push_back(0);
    vector<ll> stuff(n);
    ll k=1;
    while(!q.empty()){
        int v=q.front();
        if(stuff[v]==k) k++;
        level.push_back(0);
        q.pop();
        for(ll u : adj[v]){
            if(!used[u]){
             
                q.push(u);
                
                used[u]=true;
                   
               level[k]++;
               
              stuff[u]=k;
              
            }
                
                 
        } }
        
        ll ans=1;
        if(used[n-1]==false) cout<<0;
        else{

        for(ll i=;i<=stuff[n-1];i++){
            ans=(ans%mod)*(level[i]%mod);
          
            
        }
        cout<<ans;}
        cout<<endl;
    

    cout << "\n";
}

int32_t main()
{
  
        solveCase();
}