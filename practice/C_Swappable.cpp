#include <bits/stdc++.h>
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
   ll num=n;
    num=(num)*(num-1)/2;
    for(auto it :b){
        if(it.second>1){
            num-=(it.second)*(it.second-1)/2;
        }
    }
    cout<<num;
    cout << "\n";
}

int32_t main()
{
        solveCase();
}