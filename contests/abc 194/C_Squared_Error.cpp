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
    for(ll i=0;i<n;i++) cin>>a[i];
    ll ans1=0,ans2=0;
    for(ll i=0;i<n;i++){
        ans1+=a[i];
        ans2+=a[i]*a[i];
    }
    cout<<n*ans2-(ans1*ans1);
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}