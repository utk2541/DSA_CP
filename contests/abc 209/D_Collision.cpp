#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;

    vector<vector<ll>> adj(n + 1);
    ll Q;
    cin >> Q;
    for (ll i = 0; i < n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    n++;
    queue<ll> q1;

        vector<bool> used1(n);
        vector<ll> p1(n),lq(n);
    
        q1.push(1);

        used1[1] = true;

        p1[1] = -1;
        ll count=0;
        ll level=0;
        while (!q1.empty())
        {
            int v = q1.front();
            q1.pop();
           if(lq[v]==count) count++;
            for (ll u : adj[v])
            {
                if (!used1[u])
                {
                    q1.push(u);
                    used1[u] = true;
                    lq[u]=count;
                    p1[u] = v;
                }
            }
            
        }
    while (Q--)
    {
       
        ll c, d;
        cin >> c >> d;
        

      
        if (abs(lq[c]-lq[d])%2==0)
            cout << "Town";
        else
            cout << "Road";

        cout << "\n";
    }
}

int32_t main()
{

    solveCase();
}