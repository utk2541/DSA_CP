#include<bits\stdc++.h>
#define ll long long
using namespace std;
ll n;
vector<ll> g[1000];
vector<bool> used(1000,false);
vector<ll> comp;
void dfs(int v){
    used[v] = true;
    comp.push_back(v);
    for(ll i=0;i< g[v].size();i++){
        ll to = g[v][i];
        if(!used[to]) dfs(to);
    }
}
void find_comp(){
    for(ll i=0;i<n;i++){
        used[i]=false;
    }
    for(ll i=0;i<n;i++){
        if(!used[i]){
            comp.clear();
            dfs(i);
            cout<<"component :";
            for(ll j=0;j<comp.size();j++) cout<<' '<<comp[j];
            cout<<endl;
        }
    }
}
int main(){
   

    return 0;
}
