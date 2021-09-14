#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    ll totalg=a+b;
    ll a1=a,b1=b;
    set<ll> k;
    if(totalg%2==0){
        ll t1=min(a,totalg/2),t2=min(b,totalg/2);
        while(t1>=0 && t2>=0){
            k.insert(t1+t2);
            t1--;
            t2--;
        }
    }
    else{
        ll t=totalg/2;
        for(ll i=min(t,max(a,b));i>=abs(min(a,b)-t);i-=2){
            k.insert(i);
            k.insert(totalg-i);
        }
        for(ll i=min(t+1,max(a,b));i>=abs(max(a,b)-t-1);i-=2){
            k.insert(i);
            k.insert(totalg-i);
        }
    }
    cout<<k.size()<<endl;
    for(ll i : k ) cout<<i<<" ";
  
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}