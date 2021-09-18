#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll d[n];
    for(ll i=0;i<n;i++) cin>>d[i];
    sort(d,d+n);
    
    
    ll p=0;
    for(ll i=1;i<n;i++){
       p +=d[i]-d[i-1];
       
    }
    
    for(ll i=1;i<n;i++){
       
        p-=(i)*(n-i)*(d[i]-d[i-1]);
    }
    cout<<p;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}