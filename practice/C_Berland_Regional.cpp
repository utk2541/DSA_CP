#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll s[n], u[n];
    for (ll i = 0; i < n; i++)
        cin >> u[i];
    for (ll i = 0; i < n; i++)
        cin >> s[i];
    vector<ll> b[n];
    for (ll i = 0; i < n; i++)
    {
        b[u[i]-1].push_back(s[i]);
    }
    vector<ll> c[n];
    ll k = n;
    for( auto i =0;i<n;i++){
         sort(b[i].begin(), b[i].end(), greater<ll>());
    }
    for( auto i=0;i<n;i++){
        ll sumb=0;
        for(auto j : b[i]){
            sumb+=j;
            c[i].push_back(sumb);
        }
        
    }
    vector<ll> ans;
    ll sum = 0;
    for (ll it = 1; it <= k; it++)
    {
        sum = 0;

        for(auto i : c){
            if(i.size()>=it){
            sum+=i[(i.size()/it)*it-1];
            }
        }
        
        ans.push_back(sum);
    }

    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}