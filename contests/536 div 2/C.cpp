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
    ll sum=0;
    for(ll i=0;i<n/2;i++){
        sum+=(a[i]+a[n-1-i])*(a[i]+a[n-1-i]);
    }
    cout<<sum;
    cout << "\n";
}

int32_t main()
{
  
        solveCase();
}