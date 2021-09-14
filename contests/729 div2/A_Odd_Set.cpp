#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[2*n];
    for(ll i=0;i<2*n;i++) cin>>a[i];
    ll ct1=0,ct2=0;
    for(ll i=0;i<2*n;i++){
        if(a[i]%2==0) ct1++;
        else ct2++;
    }
    if(ct1==ct2) cout<<"Yes";
    else cout<<"No";

    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}