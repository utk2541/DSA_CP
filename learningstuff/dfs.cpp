#include <bits\stdc++.h>
#define ll long long
using namespace std;
/*use graph editor: https://csacademy.com/app/graph_editor/ , for maximum fun*/
vector<vector<ll>> adj;
ll n;
vector<bool> visited(n+1);
vector<ll> color(n+1);
vector<ll> timein(n+1),timeout(n+1);
ll dfstimer=0;
void dfs(ll v){
    timein[v]=dfstimer++;
    color[v]=1;
    visited[v]=true;
    for(ll u : adj[v]){
        if(color[u]==0) dfs(u);}
    color[v]=2;
    timeout[v]=dfstimer++;
    
}
int main(){
    return 0;
}