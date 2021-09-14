#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    if(a==b) cout<<0<<" "<<0;
    else{
        ll m=abs(b-a);
        ll moves = min(a%m,m-a%m);
        cout<<m<<" "<<moves;
    }

    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}