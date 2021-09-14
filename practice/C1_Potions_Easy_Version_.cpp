#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll sump=0,sumn=0;
    for(ll i=0;i<n;i++){if(a[i]>0)sump+=a[i];}
    
    ll health=0;
    ll count=0;
    map<ll,ll> b;
    for(ll i=0;i<n;i++)  b[a[i]]=0;
    for(auto it=b.begin();it!=b.end();it++){
        if(sump+it->first<0){
            it->second=1;
            
        }
        sump+=it->first;
    }

    for(ll i=0;i<n;i++) {
        if(health+a[i]>=0 && b[a[i]]==0) {count++; health+=a[i];}
    }
    cout<<"\n"<<count;
    cout << "\n";
}

int32_t main()
{
        solveCase();
}