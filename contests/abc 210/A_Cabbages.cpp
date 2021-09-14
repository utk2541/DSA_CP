#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,a,x,y;
    cin >> n>>a>>x>>y;
    if(n>a) cout<<x*(a)+y*(n-a);
    else cout<<x*n;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}