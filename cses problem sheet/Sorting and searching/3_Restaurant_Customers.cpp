#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll n;
        cin>>n;
        pair<ll,ll> a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
        }
        sort(a, a+n);
        ll count=1;
        ll leave=a[0].second;
        ll maxcount=0;
        for(ll i=1;i<n;i++){
            if(a[i].first>=a[i]) {count++;}
            if(a[i].first<)
        }
        cout<<count;
        


    return 0;
}
