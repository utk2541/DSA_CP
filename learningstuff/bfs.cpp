#include <bits\stdc++.h>
#define ll long long
using namespace std;
/*use graph editor: https://csacademy.com/app/graph_editor/ , for maximum fun*/
int main()
{
    vector<vector<ll>> adj(6);
    ll n;
    ll s=3;
    n=6;
    ll x,y;
    for(ll i=0;i<8;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    queue<ll> q;
    
    vector<bool> used(n);
    vector<ll> d(n), p(n);
    
    q.push(s);
    used[s]=true;
    p[s]=-1;
     
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(ll u : adj[v]){
            if(!used[u]){
                q.push(u);
                used[u]=true;
                d[u]=d[v]+1;
                p[u]=v;
           //     cout<<u<<" ";
            }
            
        }
     //   cout<<endl;
    }
    
    ll u=5;
    if(!used[u]){ cout<<"no path";}
    else{
        vector<ll> path;
        
        for(ll i=u;i!=-1;i=p[i]){
            path.push_back(i);
        }
        for(auto i : path){
            cout<<i<<" ";
        }
    }

    return 0;
}