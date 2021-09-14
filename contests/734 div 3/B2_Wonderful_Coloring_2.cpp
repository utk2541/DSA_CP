#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n;
    cin >> n;
    
    ll k;
    cin>>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
   map<ll,ll> b;
    map<ll,ll> c;
    ll d[k+1]={};
    vector<ll> ans;
    ll num=0;
    for(ll i=0;i<n;i++){
        b[a[i]]++;
        ll temp=b[a[i]];
        while(d[b[a[i]]]>=n/k){
               if(b[a[i]]==k-1) b[a[i]]=k;
               else b[a[i]]=(b[a[i]]+1)%k;
               if(temp==b[a[i]]) break;

            }
        if(d[b[a[i]]%k]<n/k ){
            ans.push_back(b[a[i]]%(k+1));
            d[b[a[i]]]++;

        }
        else ans.push_back(0);
        

    }
    
  
   
   for(auto i : ans) cout<<i<<" ";
    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}