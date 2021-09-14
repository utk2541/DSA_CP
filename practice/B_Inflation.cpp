#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,k;
    cin >> n >>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll c=a[0];
    ll ans=0;
    for(ll i=1;i<n;i++){
      
        ans=max(ans,(100ll*a[i]-k*c+k-1)/k);
        c+=a[i];
        //cerr<<ans<<" "<<c<<endl;

    }
    cout<<ans;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}