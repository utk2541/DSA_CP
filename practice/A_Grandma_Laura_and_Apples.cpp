#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,p;
    cin >> n >>p;
    string s[n];
    for(ll i=n-1;i>=0;i--) cin>>s[i];
    ll count=1;
    ll money=count*p/2;
    for(ll i=1;i<n;i++){
        count*=2;
        if(s[i]=="halfplus"){
            count++;
        }
        money+=count*p/2;
        
    }
     cout<<money;
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}