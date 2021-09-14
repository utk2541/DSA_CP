#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
class dsu
{
public:
    
    ll parent[1000000];
    ll sizepepeg[1000000];
    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    void make_set(int v)
    {
        parent[v] = v;
        sizepepeg[v] = 1;
    }
   
    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (sizepepeg[a] < sizepepeg[b])
                swap(a, b);
            parent[b] = a;
            sizepepeg[a] += sizepepeg[b];
            
        }
    }
};
void solveCase()
{
    ll n,q;
    cin>>n>>q;
    dsu s;
    for(ll i=1;i<=n;i++) s.make_set(i);
    while(q--){
        string o;
        cin>>o;
        ll a,b;
        cin>>a>>b;
        if(o=="union"){
            s.union_sets(a,b);
        }
        if(o=="get"){
            if(s.find_set(a)==s.find_set(b)) cout<<"YES";
            else cout<<"NO";
            cout<<"\n";
        }
        
    }
    
}

int32_t main()
{
     solveCase();
}