#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
bool f(pair<ll,ll> a,pair<ll,ll> b){
    return a.first<b.first;
}
void solveCase()
{
    ll n ;
    cin >> n;
    vector<pair<ll,ll>> a(n,{0,0});
   
 
    for(ll i=0;i<n;i++){
       
        
         ll k;
        cin>>k;
     a[i].second=k;
        ll t;
        for(ll j=0;j<k;j++) { cin>>t;  a[i].first=max(t-j,a[i].first);}
       
    }
    
    sort(a.begin(),a.end(),f);
    ll sum=0;
    for(ll i=0;i<n;i++) {
        a[i].first=a[i].first-sum;
       
        sum+=a[i].second;
        
    }
    ll stuff=a[0].first;
  
    for(ll i=0;i<n;i++){
       stuff=max(stuff,a[i].first);
    }
    cout<<stuff+1;

    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}