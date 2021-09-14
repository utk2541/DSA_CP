#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    if(a+b>=15 && b>= 8) cout<<1;
    else if(a+b>=10 && b>=3) cout<<2;
    else if(a+b>=3) cout<<3;
    else cout<<4;
    cout << "\n";
}

int32_t main()
{

        solveCase();
}