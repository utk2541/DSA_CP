#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll way1=1,way2=1;
    
    for(ll i=n;i>1;i--) way1*=i;

    cout<<2*way1/(n*n);
    cout << "\n";
}

int32_t main()
{
        solveCase();
}