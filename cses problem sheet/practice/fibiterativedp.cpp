#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;



int32_t main()
{
   ll n;
   cin>>n;
   ll dp[n+2]={};
   dp[1]=1;
   
   for(ll i=2;i<=n;i++){
       dp[i]=dp[i-1]+dp[i-2];
   }
   cout<<dp[n];

}