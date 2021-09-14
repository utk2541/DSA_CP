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
    sort(a,a+n);
    ll k=n/2;
    ll x2=a[k];
    double sum=0;
    for(ll i=0;i<n;i++){
        sum+=(x2/2.0)+a[i] -min(x2,a[i]);
    }
    printf("%f",sum/n);
    cout << "\n";
}

int32_t main()
{
        solveCase();
}