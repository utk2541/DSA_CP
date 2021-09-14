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
        maxnum[v]=v;
        minnum[v]=v;
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
            if(minnum[a]>minnum[b])minnum[a]=minnum[b];
            if(maxnum[a]<maxnum[b])maxnum[a]=maxnum[b];
        }
    }
};


int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
            cout<<s.minnum[s.find_set(c)]<<" "<<s.maxnum[s.find_set(c)]<<" "<<s.sizepepeg[s.find_set(c)];
            cout<<"\n";
        }
        
    }
}