#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
class dsu
{
public:
    
    vector<int> parent;
    vector<int> sizepepeg;
    dsu()
    {
        
        parent.resize(1000000);
        sizepepeg.resize(1000000);
    }
    int find_set(int v){
    if(v == parent[v])
        return v;
    
        return parent[v]=find_set(parent[v]);
    
    
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
    ll n,m,k;
    cin>>n>>m>>k;
    ll c,d;
    dsu s;
    for(ll i=1;i<=n;i++) s.make_set(i);
    for(ll i=0;i<m;i++) {
        cin>>c>>d;
        
    }
    string q[k];
    pair<ll,ll> p[k];
    vector<string> ans;
    for(ll i=0;i<k;i++){
       
        cin>>q[i];
       
       
        cin>>p[i].first>>p[i].second;}
        for(ll i=k-1;i>=0;i--){
        string o=q[i];
        ll a=p[i].first;
        ll b=p[i].second;
        if(o=="ask"){
            if(s.find_set(a)==s.find_set(b)) ans.push_back("YES");
            else ans.push_back("NO");
        }
        if(o=="cut"){
            s.union_sets(a,b);
            
        }
    }
    for(auto brr= ans.rbegin();brr!=ans.rend();brr++){
        cout<<*brr<<"\n";
    }


}

int32_t main()
{
        solveCase();
}