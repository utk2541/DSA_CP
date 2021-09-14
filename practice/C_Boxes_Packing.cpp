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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
 
    ll maxcount=1;
    map<ll,ll> b;
    for(ll i=0;i<n;i++){
        b[a[i]]++;
            
    }
    for(auto i : b){
        if(i.second>maxcount) maxcount=i.second;
    }
    cout<<maxcount;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}