#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,k;
    cin >> n >>k;
    ll a[n];
    ll weed[n]={};
    for(ll i=0;i<n;i++) cin>>a[i];
    map<ll,ll> b;
    for(ll i=0;i<n;i++){
        b[a[i]]=i;
    }
    
    ll num=k/n;
    ll left=k%n;
    sort(a,a+n);
    for(ll i=0;i<n;i++){
       weed[b[a[i]]]+=num;
       if(left>0){
           weed[b[a[i]]]++; left--;
       }

    }
    
    for(ll i=0;i<n;i++){
        cout<<weed[i]<<"\n";
    }


}

int32_t main()
{
   
        solveCase();
}