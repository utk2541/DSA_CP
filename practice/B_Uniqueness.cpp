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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> b;
    for(ll i=1;i<n;i++) {
        if(a[i]==a[i-1]){ b.push_back(i-1);
        b.push_back(i);
    }

    }
    ll count=1;
    for(ll i=1;i<b.size();i++){
        if(abs(b[i]-b[i-1])!=1) count++;
    }
    cout<<count;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}