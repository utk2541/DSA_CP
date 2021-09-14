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
    
    ll min=a[n-1];
    ll pos=n-1;

    vector<ll> ip;
    for(ll i=0;i<n-1;i++){
        
        if(a[i]<min){ min=a[i]; pos=i;}
    }
    
    cout<<n-1<<endl;
    for(ll i=0;i<n;i++){
        if(i==pos) continue;
        cout<<pos+1<<" "<<i+1<<" "<<min<<" "<<min+abs(pos-i)<<endl;
    }
    
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}