#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll t;
        cin>>t;
        while(t--){
            ll n;
            cin>>n;
            ll a[n];
            for(ll i=0;i<n;i++) cin>>a[i];
            ll ans=a[0];
             ll ans2=a[n-1];
            ll k=0;
            for(ll i=0;i<n-1;i++){
                if(a[i]!=a[i+1]) k=1;
            }
            if(k==1){
            for(ll i=1;i<n;i++) {
               
                ans=ans^a[i];
                if(ans==a[i+1] && i<n-3){i+=2;  ans=a[i+2]; 
                }
            
           
          }}
            if(ans==0 || ans2==0 || k==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            
        }
    return 0;
}