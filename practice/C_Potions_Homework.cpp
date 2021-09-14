#include <bits\stdc++.h>
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
    sort(a,a+n);
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans=(ans+a[i]*a[n-1-i]%10007)%10007;
    }

    cout<<ans;
    cout << "\n";
}

int32_t main()
{ 
        solveCase();
}