#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];
        ll start=a[0], finish=b[0];
        for(ll i=1;i<n;i++){
            if(a[i]>start) start=a[i];
            if(b[i]<finish) finish=b[i];
        }
        if(finish-start>=0){
        cout<<finish-start+1<<endl;}
        else cout<<0<<endl;
    return 0;
}
