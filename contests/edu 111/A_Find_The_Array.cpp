#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll ans=1;
    ll sum=1;
    
    for(ll i=2;i<=n;i+=2){
        sum+=i;
        ans++;
        if(sum+(ans-1)>=n){
            
            break;
        }
        
    }
  
    cout<<ans;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}