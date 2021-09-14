#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll l,r;
    cin >>l>>r;
    if(l<=r/2)
    cout<<r%(r/2 +1);
    else cout<<r%(l);
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}