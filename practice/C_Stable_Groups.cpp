#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
 
void solveCase()
{
    ll n,k,x;
    cin >> n >> k>>x;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll count=1;
    vector<ll> b;
    for(ll i=0;i<n-1;i++){
        if(a[i+1]-a[i]>x){count++; b.push_back(a[i+1]-a[i]);}

    }
    sort(b.begin(),b.end());
    for(auto it:b){
if(k>= (ll)ceil((long double)(it)/(long double)x)-1){
    k-=(ll)ceil((long double)(it)/(long double)x)-1;
    count--;
}


    }

    cout<<count;
    cout << "\n";
}
 
int32_t main()
{
    
        solveCase();
}