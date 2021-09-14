#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n=0;
    cin >> n;
    ll a[n],b[n];
    unordered_map<ll,vector<ll>> c;
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++){
        
        
        for(ll j=0;j<n;j++) {
            ll temp= a[i]^b[j];
          
            if(c[temp].size()<n) c[temp].push_back(1);
            else
            c[temp][i]++;
        }
    }
    vector<ll> ans;
    
    for(auto i : c){
        ll k=0;

      
        if(i.second.size()==n) ans.push_back(i.first);

    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    if(ans.size()>0) {
        for(auto i :ans) cout<<i<<endl;
    }

    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}