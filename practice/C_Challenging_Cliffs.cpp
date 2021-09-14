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
    ll diff=9999999999999;
    ll f=0,s=0;
    for(ll i=0;i<n-1;i++){
        if(a[i+1]-a[i]<diff){
            diff=a[i+1]-a[i];
            f=i;
            s=i+1;
        }
    }
   
    for(ll i=f;i<n;i++){
            if(i!=s)
            cout<<a[i]<<" ";
        
    }
    for(ll i=0;i<=s;i++)  if(i!=f) cout<<a[i]<<" ";
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}