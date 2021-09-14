#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
 
 
 
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
   
    map<ll,ll> m;
   
    for(ll i=0;i<n;i++){
        m[a[i]]=i;
 
    }
    ll num1,num2,k=0;
    vector<ll> ans;
    for(ll i=0;i<n;i++){
        num1=99999999999;
        num2=99999999999;
        k=0;
        for(ll j=i+1,g=i-1;j<n || g>=0;){
           if(j<n) {if(a[j]>a[i]){ num1=j;
            k=1;
            break;}}
            if(g>-1){
            if(a[g]>a[i]){
                num1=g; k=1; break;
            }}
            if(j<n) j++;
            if(g>=0) g--;
 
 
        }
        
        if(k==1){
        
            ans.push_back(num1);
        }
        else ans.push_back(-1);
    }
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
}