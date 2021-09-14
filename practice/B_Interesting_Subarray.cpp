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
    ll maxa,mina;
    ll l=0,r=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
   ll c,d,k=0;
    for(ll i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])>=2){
            k=1;
            c=i+1;
            d=i+2;
            break;
        }
    }
    if(k==1) cout<<"YES"<<"\n"<<c<<" "<<d;
    else cout<<"NO";
    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}