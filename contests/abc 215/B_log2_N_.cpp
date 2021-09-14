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
    ll num=1;
    for(ll i=0; num<=n;i++){
        ans=i;
        num=num*2;

    }

    cout << ans;
}

int32_t main()
{
    
        solveCase();
}