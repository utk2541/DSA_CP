#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll b[n+2],c[n+2];
    
    for(ll i=0;i<n+2;i++){ cin>>b[i];}
    sort(b,b+n+2);
    ll sum0=0;
    for(ll i=0;i<n;i++){
        sum0+=b[i];
    } 
    if(sum0==b[n]) for(ll i=0;i<n;i++) cout<<b[i]<<" ";
    else{
        sum0+=b[n];
    
        ll extrain=-1;
        for(ll i=0;i<=n;i++){
            if(sum0-b[i]==b[n+1] ) {  extrain=i;}
            
        }
                
        if(extrain==-1) cout<<-1;
        else
        for(ll i=0;i<=n;i++){
            if(extrain!=i) cout<<b[i]<<" ";
        }

    }

    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}