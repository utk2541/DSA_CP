#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll t;
        cin>>t;
        while(t--){
            ll n,k;
            cin>>n>>k;
            ll a[n];
            for(ll i=0;i<n;i++)cin>>a[i];
            ll stuff;
            for(ll i=0;i<n-1 && k!=0;i++){
                stuff= min(a[i],k);
                a[i]-=stuff;
                k-=stuff;
                a[n-1]+=stuff;
            }
            for(ll i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
    return 0;
}
