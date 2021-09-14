#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0,max=0;
    cin >> n;
    vector<pair<ll,ll>> t(n);
    for(ll i=0;i<n;i++){cin>>t[i].first>>t[i].second;
        if(max<t[i].first) max=t[i].first;
    }
    vector<bool> tea;
    vector<ll> ans;
    ll k=0;

    for(ll i=1;i<=max;i++){
        for(ll j=k;j<n;j++){
            if(t[j].first<=i && t[j].second>=i){
                
                ans.push_back(i);
                k=j+1;
                i++;
            }
            else if(t[j].second<i && t[j].first<i){
                ans.push_back(0);
                k=j+1;
            }
           
        }
    }
    for(auto i : ans) cout<<i<<" ";
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}