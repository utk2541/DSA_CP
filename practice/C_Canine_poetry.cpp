#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin>>s;
    ll count=0;
    ll n= s.length();
    if(s.length()>2){
    for(ll i=0;i<s.length()-2;i++){
        if(s[i]==s[i+1]|| s[i]==s[i+2]){
            if((s[i]==s[i+2] )&& ( s[i]!='*')){ s[i+2]='*'; count++; }
            if(s[i]==s[i+1] && ( s[i]!='*')){ s[i+1]='*'; count++; }
        }
    }
    if(s[n-2]==s[n-1] && ( s[n-1]!='*')){  count++; }
    }
    else{
        if(s.length()>1){
            if(s[0]==s[1]) count++;
        }
        
    }
    cout<<count;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}