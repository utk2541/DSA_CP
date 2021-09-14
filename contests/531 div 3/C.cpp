#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); ll n;
    cin>>n;
    ll x,y;
    cin>>x>>y;
    vector<ll> a;
    ll num;
    for( ll i=0;i<n;i++){ cin>>num; a.push_back(num);}
    
    sort(a.begin(),a.end());
    ll count=0;
    ll i=0;
    while(i<a.size() &&(x>a[i] || x>y) ){
     a[i]=max((ll)0,a[i]-x);
        if(a[i]==0){
            count++;
            a[i+1]+=y;
            i++;
        }
        else{
            a[i]+=y;
        }
        sort(a.begin(),a.end());
    }
    cout<<count;

    return 0;
}
