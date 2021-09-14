#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll c,d;
    cin >> c>>d;
    if(abs(c-d)>1 && abs(c-d)%2==0) cout<<2;
    else if(c==0 && d==0) cout<<0;
    else if(c==d) cout<<1;
    else cout<<-1;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}