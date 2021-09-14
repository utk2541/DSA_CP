#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
class dsu
{
public:
    vector<int> maxnum;
    vector<int> minnum;
    vector<int> parent;
    vector<int> sizepepeg;
    dsu()
    {
        maxnum.resize(1000000);
        minnum.resize(1000000);
        parent.resize(1000000);
        sizepepeg.resize(1000000);
    }
    int find_set(int v,int MAX,int MIN)
    {
        if (v == parent[v]){
            
            maxnum[v]=MAX;
            minnum[v]=MIN;
            return v;
            }
        if(MAX<v) MAX=v;
        if(MIN>v) MIN=v;
        return parent[v] = find_set(parent[v],MAX,MIN);
    }
    void make_set(int v)
    {
        parent[v] = v;
        sizepepeg[v] = 1;
    }
   
    void union_sets(int a, int b)
    {
        a = find_set(a,a,a);
        b = find_set(b,b,b);
        if (a != b)
        {
            if (sizepepeg[a] < sizepepeg[b])
                swap(a, b);
            parent[b] = a;
            sizepepeg[a] += sizepepeg[b];
            if(minnum[a]>minnum[b])minnum[a]=minnum[b];
            if(maxnum[a]<maxnum[b])maxnum[a]=maxnum[b];
        }
    }
};


int main()
{
    ll n,q;
    cin>>n>>q;
    dsu s;
    for(ll i=1;i<=n;i++) s.make_set(i);
    while(q--){
        string o;
        cin>>o;
    
        
        if(o=="union"){
            ll a,b;
            cin>>a>>b;
            s.union_sets(a,b);
        }
        if(o=="get"){
            ll c;
            cin>>c;
            cout<<s.minnum[s.find_set(c,c,c)]<<" "<<s.maxnum[s.find_set(c,c,c)]<<" "<<s.sizepepeg[s.find_set(c,c,c)];
            cout<<"\n";
        }
        
    }
}