#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    map<ll,ll> b;
    for(ll i=0;i<n;i++) {cin>>a[i]; b[a[i]]++;}
    sort(a,a+n);
    ll big=(b.rbegin())->second;
    ll small=(b.begin())->second;
    cout<<a[n-1]-a[0]<<" ";
    cout<<big*small;


    
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}