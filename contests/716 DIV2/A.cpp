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
            ll prod=1;
            int flag=0;
            for(ll i=0;i<n;i++){ cin>>a[i]; prod=(ll)sqrt(a[i]); if(prod*prod!=a[i]) flag=1;}
            if(flag==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            


        }
    return 0;
}
