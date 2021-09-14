#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll count=0;
    set<ll> b;
    for(ll i=2;i<=sqrt(n);i++){
        for(ll j=i*i;j<=n;j*=i){
            b.insert(j);
            
        }
  
    }
    count=b.size();
    cout<<n-count;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}