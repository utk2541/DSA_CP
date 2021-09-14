#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n],p[n],x[n];
    vector<ll> b;
    for(ll i=0;i<n;i++){
        cin>>a[i]>>p[i]>>x[i];
        if(x[i]-a[i]-0.5>0) b.push_back(p[i]);
    }
    ll min=1000000001;
    for(auto i : b){
        if(min>i) min=i;
    }
    if(min==1000000001) cout<<-1;
    else cout<<min;

    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}