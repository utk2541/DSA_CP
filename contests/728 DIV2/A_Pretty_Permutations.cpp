#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    if( n%2==0)
    for(ll i=1;i<=n;i+=2) cout<<i+1<<" "<<i<<" ";
    else {
        for(ll i=1;i<n-2;i+=2) cout<<i+1<<" "<<i<<" ";
        cout<<n<<" "<<n-2<<" "<<n-1;

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