#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll num=0;
    for(ll i=1;i<=sqrt(n);i++){
        num=i*i;
    }
    if(n-num ==0) cout<<sqrt(n)<<" "<<1;
    else if(n-num<= sqrt(num)) cout<<n-num<<" "<<sqrt(num)+1;
    else cout<<sqrt(num)+1<<" "<<(sqrt(num)+1)*(sqrt(num)+1)-n+1;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}