#include <iostream>
#include<vector>
#include<queue>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m;
    cin >> n >> m;
    vector<vector<ll>> adj(n);
    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    
    queue<ll> q;
    ll start=0;
    vector<bool> used(n);
    ll p[n];
    q.push(start);
    p[start]=-1;
    used[start]=true;
    
    while(!q.empty()){
        ll v=q.front();
        q.pop();
        for(auto u :adj[v]){
            if(!used[u]){
                used[u]=true;
                p[u]=v;
                q.push(u);
            }
        }
       

    }
    
     if(!used[n-1]) cout<<"IMPOSSIBLE";
        else{
            vector<ll> path;
            for(ll i=n-1;i!=-1;i=p[i]){
                path.insert(path.begin(),i);
            }
            cout<<path.size()<<endl;
            for(auto i : path){
                cout<<i+1<<" ";
            }
        }
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}