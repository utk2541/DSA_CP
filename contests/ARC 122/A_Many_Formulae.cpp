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
    ll sum=0;
    for(ll i=0;i<n;i++){ cin>>a[i];  sum=(sum%mod+a[i]%mod)%mod;}
    if(n%2==0){
    for(ll i=1;i<n;i++){
        

    }
    }
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}