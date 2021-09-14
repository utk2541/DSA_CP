#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll m = 0;
    cin >> m;
    vector<ll> a[2];
    for(ll i=0;i<2;i++){
        for(ll j=0;j<m;j++){
            ll aij;
            cin>>aij;
            a[i].push_back(aij);
        }
    }
   ll sum=0,sum0=0;
    ll ind=m-1;
    ll sum1=0;
    for(ll i=0;i<m;i++){
        sum0+=a[0][i];
        
    }
    for(ll i=0;i<m-1;i++){
        sum1+=a[1][i];
        sum0-=a[0][i];
        
        if(sum1>sum0) {ind=i; break;}
    }
    
    ll sum2=0,sum3=0;
    for(ll i=0;i<ind;i++){
        sum2+=a[1][i];
    }
    for(ll i=ind+1;i<m;i++) sum3+=a[0][i];
    cout<<max(sum2,sum3);
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}