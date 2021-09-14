#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    string s;
    cin>>s;
    map<ll,ll> b;
    ll count=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='*') {
            
            b[count]=i;
            count++;
        }
        
    }

    ll moves=0;
    ll cur=b[count/2]-(count/2);
    for(ll i=0;i<n;i++){
        if(s[i]=='*'){
            moves+=abs(cur-(i));
            cur++;
        }
    }

    
    cout<<moves;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}