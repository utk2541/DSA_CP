#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
ll mod = 1e9 + 7;
ll dp[1000000];
ll comb(ll x,ll n,ll *a){

}

int32_t main()
{   memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
    ll a[n];
    ll x;
    cin>>x;
    for(ll i=0;i<n;i++) cin>>a[i];
    cout<<comb(x,n,a);
    
    
}