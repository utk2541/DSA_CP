#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,k;
    cin >> n >>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    map<ll,ll> cnt;
    for(ll i=0;i<n;i++) {
        cnt[a[i]]++;
    }
    map<ll,ll> cnt1;
    for(ll i=0;i<n;i++){
        cnt1[a[i]]=0;
    }
    vector<ll> ans;
    vector<ll> stuff(k);
    ll j=0;
    
    for(ll i=0;i<n;i++){
        if(stuff[j]>n/k ) j++;
        if(cnt1[a[i]]+j<k ){ cnt1[a[i]]++; ans.push_back(cnt1[a[i]]+j); stuff[cnt1[a[i]]+j-1]++; }
        else{
            ans.push_back(0);
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