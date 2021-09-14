#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll, ll>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,m;
    cin >> n>>m;
    ll k=n/m;
    ll r= n%m;
 
    cout<<(((k+1)*(k+1)-(k+1))*r/2)+(k*k-k)*(m-r)/2<<" "<<(n-m+1)*(n-m)/2;

    cout << "\n";
}

int32_t main()
{
  solveCase();
}