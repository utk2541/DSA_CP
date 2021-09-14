#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,w;
    cin >> n >>w;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    multiset<ll> b;
    ll count=n;
    ll h=1;
    for(ll i=0;i<n;i++){
        b.insert(a[i]);
    }
    ll k=w;
    while(b.size()){
        
        auto it = b.upper_bound(k);
     // cerr<<(*it).first<<" "<<(*it).second<<"/"<<h<<"/";
        if(it!=b.begin()){
            it--;
            k-=(*it);
            b.erase(it);
        }
        else{
            k=w;
            h++;
        }
    }
    cout<<h;
   // cerr<<endl;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}