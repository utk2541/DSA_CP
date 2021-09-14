#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
bool compa(pair<ll,ll> a,pair<ll,ll> b){
    if(a.first<b.first) return true;
    return false;
}
void solveCase()
{
    ll n = 0;
    cin >> n;
    pair<ll,ll> a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i].first>>b[i].first;
        a[i].second=i; b[i].second=i;
    }
   sort(a,a+n,compa);
   sort(b,b+n,compa);
   ll ans=0;
   if(a[0].second==b[0].second && max(a[1].first,b[1].first)<a[0].first+b[0].first){
       cout<<min(max(a[0].first,b[1].first),max(a[1].first,b[0].first));
   }
   else if(a[0].second==b[0].second){
       cout<<a[0].first+b[0].first;
   }
   else{
       cout<<max(a[0].first,b[0].first);
   }

    
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}