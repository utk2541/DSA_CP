#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n, m;
    cin >> n >> m;
    ll a[m];
    for (ll i = 0; i < m; i++)
        cin >> a[i];
    vector<ll> b(101,0);
    for (ll i = 0; i < m; i++)
    {   
        b[a[i]]++;
        
    }
   
    ll d = 0;
    for (ll i = 100; i >= 1; i--)
    {   vector<ll> c(b);
        d = 0;
        for (ll j = 1; j <= 100; j++)
            while (c[j] >= i)
            {   d++;
                c[j] -= i;
                
            }
        if (d >= n)
        {
            cout << i;
            return (void)0;
        }
    }
    cout << 0 <<endl;
    cout << "\n";
}

int32_t main()
{

    solveCase();
}