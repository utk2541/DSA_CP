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
    ll b[n];
    map<ll,ll> c;
    for(ll i=0;i<n;i++){
        b[i]=abs(a[i]);
        c[b[i]]=a[i];
    }
    sort(b,b+n);
    ll prod=-999999999999999;
    ll prod2=1;
    for(ll i=n-1;i>=4;i--){
        ll prod2=1;
        for(ll j=i;j>i-5;j--){
            prod2*=c[b[i]];
        }
        if (prod2>prod) prod=prod2;
    }
    cout<<prod;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}