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
            ll count=-1;
            for(ll i=1;i<n-1;i++){
                if(a[i]!=a[i-1]){
                    if(a[i]==a[i+1]) count=i;
                    else count=i+1;
                    
                }
               
            }
            if(count ==-1){
                if(a[n-1]!=a[n-2]) count=n;
            }
            cout<<count<<endl;
        }
    return 0;
}
