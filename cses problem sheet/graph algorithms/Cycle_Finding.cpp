#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
struct edge{
    ll a,b,c;
};

void solveCase()
{
    ll n,m;
    cin >> n >> m;
    vector<edge> e(m);
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        e[i].a=a;
        e[i].b=b;
        e[i].c=c;
        
    }
    vector<ll> d(n,5000000000000001);
    vector<ll> p(n,-1);
    d[0]=0; ll x=-1;
    for(ll i=0;i<n;i++){
        x=-1;
        for(ll j=0;j<m;j++){
            if((d[e[j].a]+e[j].c )< d[e[j].b]){
                d[e[j].b]= min((d[e[j].a]+e[j].c ),d[e[j].b]);
                p[e[j].b] = e[j].a;
                x = e[j].b;
            }
        }
    }
    if(x==-1) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        ll y = x;
        for (ll i=0; i<n; ++i)
            y = p[y];

        vector<ll> path;
        for (ll cur=y; ; cur=p[cur])
        {
            path.push_back (cur);
            if (cur == y && path.size() > 1)
                break;
        }
        reverse (path.begin(), path.end());
        for(auto i : path) cout<<i+1<<" ";
    }
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}