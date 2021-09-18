#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll, ll>
int32_t mod = 1e9 + 7;
vector<vector<pair<ll,ll>>> adj;
ll INF=999999999999969999;
vector<vector<ll>> d;

void shortest_path(ll n){
   for(ll k=0;k<n;k++){
       for(ll i=0;i<n;i++){
           for(ll j=0;j<n;j++){
               if(i==j && k==0) d[i][j]=0;
              
                   if(d[i][k]<INF && d[k][j]<INF ) d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            
           }
       }
   }
  
} 


void solveCase()
{
    ll n ,m,q;
    cin >> n >> m >>q;
    adj.resize(n);
   
      d.resize(n,vector<ll>(n,INF));
    for(ll i=0;i<m;i++){
        ll e1,e2,w;
        cin>>e1>>e2>>w;
        d[e1-1][e2-1]=min(w,d[e1-1][e2-1]);
        d[e2-1][e1-1]=min(w,d[e2-1][e1-1]);
    }
  
    shortest_path(n);
    while(q--){
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        if(d[a][b]==INF || d[a][b]==-INF) cout<<-1<<endl;
        else cout<<d[a][b]<<endl;
    }
    
 
}

int32_t main()
{
    solveCase();
}