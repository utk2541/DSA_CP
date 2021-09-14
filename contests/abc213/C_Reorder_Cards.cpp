#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<long, long>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,h,w;
    cin>>h>>w >> n;
    pii c[n];
    ll mc1=h+1,mc2=w+1;
    ll mcc1=0,mcc2=0;
    for(ll i=0;i<n;i++) {
        ll c1,c2;
        cin>>c1>>c2;
        if(c1!=c2) cout<<n-i<<" "<<i+1<<"\n";
     
        else cout<<i+1<<" "<<i+1<<"\n";
        
        
    }

   
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}