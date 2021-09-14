#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    if(n <2) cout<<a[0];
    else{
    ll ans=(a[n-1]&a[n-2]);
    for(ll i=n-3;i>=0;i--){
        ans=(ans&a[i]);
    }
   
   
    
    cout<<ans;}
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}