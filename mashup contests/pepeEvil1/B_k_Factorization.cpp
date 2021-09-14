#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,k;
    cin >> n >>k;
    ll p=2;
    vector<ll> ans;
    while(k>1 && n>p){
        if(n%p==0){
            while(n%p==0 && k>1){
                n=n/p;
                k--;
                ans.push_back(p);
            }
        }
       
            p++;

        
    }
    if(k==1){
    for(ll i : ans) cout<<i<<" ";
    cout<<n;
    }
    else cout<<-1;
    
}

int32_t main()
{
    
        solveCase();
}