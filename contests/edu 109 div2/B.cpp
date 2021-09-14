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
    for(ll i=0;i<n;i++)cin>>a[i];
    ll diff=0;
    for(ll i=0;i<n;i++){
        if(abs(i+1-a[i])>0) diff=abs(i+1-a[i]);
    }
    if(diff==0) cout<<0;
    else if(a[n-1]==n || a[0]==1) cout<<1;
    else if(a[n-1]==1 && a[0]==n) cout<<3;
    
    else cout<<2;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}