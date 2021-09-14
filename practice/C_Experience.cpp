#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
class dsu
{
public:
    vector<ll> parent;
    
    vector<ll> old_xp;
    vector<ll> xp;
    vector<ll> sizepepeg;
   
    dsu()
    {

        parent.resize(1000000);
        xp.resize(1000000,0);
        old_xp.resize(1000000,0);
        sizepepeg.resize(1000000,0);
    }
    ll find_set(int v)
    {
        if (v == parent[v])
            return v;

        return  find_set(parent[v]);
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
            old_xp[b]= xp[a];
        }
    }
    void add(int a,int b){
        a=find_set(a);
        xp[a]+=b;
    }
    ll ans(int a){
        if(a==parent[a]) return xp[a];
        else {
            return xp[a] - old_xp[a] + ans(parent[a]);
        }
    }
};
void solveCase()
{
    ll n = 0;
    dsu s;
    cin >> n;
    for (ll i = 0; i < n; i++)
        s.make_set(i+1);
    ll m;
    
    cin >> m;
    while (m--)
    {

        string q;
        cin >> q;
        if (q == "add")
        {
            ll a, b;

            cin >> a >> b;
            s.add(a,b);
        }
        if (q == "join")
        {
            ll c, d;
            cin >> c >> d;
            s.union_sets(c, d);
            

        }
        if (q == "get")
        {
            ll e;
            cin >> e;
            cout << s.ans(e);
        }
        
        cout << "\n";
    }
}

int32_t main()
{

    solveCase();
}