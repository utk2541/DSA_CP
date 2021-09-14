#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,k;
    cin >> n >> k;
    ll a[n];
    
    ll sum2=0;
    ll maxsum=0;
    for(ll i=0;i<n;i++) {cin>>a[i]; }
    for(ll j=0;j<k;j++){
        sum2=0;
    for(ll i=0;i<n;i++){
        
        if(i%k!=j )
        sum2+=a[i];
    }
   
    if(abs(sum2)>=maxsum) 
    {maxsum=abs(sum2);
    }
    
    }
    cout<<maxsum;
    cout << "\n";
}

int32_t main()
{
        solveCase();
}