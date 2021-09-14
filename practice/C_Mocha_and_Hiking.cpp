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
    ll b=-1;
    for(ll i=0;i<n-1;i++){
        if(a[i]==0 && a[i+1]==1){
            b=i+1;
            break;
        }
    }
    if((b==-1) && a[n-1]==0){
        for(ll i=0;i<=n;i++) cout<<i+1<<" ";
    }
    else if((b==-1) && a[0]==1){
        cout<<n+1<<" ";
        for(ll i=1;i<=n;i++) cout<<i<<" ";
    }
    else if(!(b==-1)){
        for(ll i=0;i<b;i++) cout<<i+1<<" ";
        cout<<n+1<<" ";
        for(ll i=b+1;i<=n;i++) cout<<i<<" ";

    }
    else cout<<-1;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}