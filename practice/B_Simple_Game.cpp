#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,m;
    cin >> n >>m;
    if(m<=n*0.5) cout<<min(m+1,n);
    else cout<<max(m-1,(ll)1);
    
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}