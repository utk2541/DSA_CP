#include <iostream>
#include<cstring>
using namespace std;
#define ll long long
#define pii pair<int, int>
ll mod = 1e9 + 7;
ll dp[10000000];

ll dicecomb(ll n){
    if(n==1){
        dp[1]=1;
        
    }
    if(dp[n]==-1){
        ll sum=0;
        for(ll i=1;i<=6 && n-i>0;i++) sum+=dicecomb(n-i)%mod;
        dp[n]=sum%mod;
        if(n>1 && n<=6) dp[n]++;
    }
    
    
    return dp[n]%mod;
}


int32_t main()
{
    ll n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    
    cout<<dicecomb(n)%mod;
   
}