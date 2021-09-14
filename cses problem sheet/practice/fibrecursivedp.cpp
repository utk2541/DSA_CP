#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
ll dp[99]={};
bool iscomputed[99]={};
ll fib(ll i){
    if(i<2) return i;
    else if(iscomputed[i]==true) return dp[i];
    dp[i]=fib(i-1)+fib(i-2);
    iscomputed[i]=true;
    return dp[i];

}


int32_t main()
{
    ll n;
    cin>>n;
    cout<<fib(n);
    
    
}