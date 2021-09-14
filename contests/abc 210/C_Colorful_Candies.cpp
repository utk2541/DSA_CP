#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,k;
    cin >> n>>k;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
  
  
    
  map<ll,vector<ll>> thakgyahuvro;
    for(ll i=0;i<n;i++){
        
         thakgyahuvro[a[i]].push_back(i);
        
    }
    
    ll ans=0;
    for(ll i=k;i<n;i++){
        
    }
   
   
   

 
   
    cout << "\n";
}

int32_t main()
{
        solveCase();
}