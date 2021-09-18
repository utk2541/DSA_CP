#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin >> s;
    ll cnt=1;
    ll len=0;
    char c = '*';
    vector<ll> lens;
    for(ll i=1;i<s.length();i++ ){
        if(s[i]!=s[i-1]){
            if(s[i-1]=='?')
            len++;
        }
        else{
        if(s[i]=='?'){
            
            
        }
        
        }
    }
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}