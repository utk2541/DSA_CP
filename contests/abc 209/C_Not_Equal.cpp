#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll c[n];
  
    for(ll i=0;i<n;i++){ cin>>c[i];
  
 
        
    }
    sort(c,c+n);
    ll sum=1;
    for(ll i=0;i<n;i++){
        sum=(sum*max(0ll,c[i]-i))%mod;
    }
    cout<<sum;
    
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}