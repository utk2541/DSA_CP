#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
ll parent[1000000];
ll sizepepeg[1000000];
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void make_set(int v) {
    parent[v] = v;
    sizepepeg[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sizepepeg[a] < sizepepeg[b])
            swap(a, b);
        parent[b] = a;
        sizepepeg[a] += sizepepeg[b];
    }
    
}
void solveCase()
{
    ll n,m;
    cin >> n >> m;
   
    for(ll i=1;i<=n;i++) {make_set(i);}
        ll c,b;
    for(ll i=0;i<m;i++){
        cin>>c>>b;
       
        union_sets(c,b);
    }  


    
    vector<pair<ll,ll>> ans;
    ll count=0,par;
    
    for(ll i=1;i<=n;i++){
        if(parent[i]==i && count<1){
            par=find_set(i);
            count++;
        }
        else if(parent[i]==i && count>=1){
            ans.push_back({par,i});
            union_sets(par,i);

            par=find_set(i);
            count++;

        }
       
    }
    cout<<count-1<<"\n";
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}