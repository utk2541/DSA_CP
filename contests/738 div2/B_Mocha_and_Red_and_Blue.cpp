#include <bits/stdc++.h>
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
    ll ind=-1;
    
    for(ll i=0;i<n;i++){
        if(s[i]=='R' || s[i]=='B') {ind=i;break;}
    }
    if(ind==-1){
        s[0]='B';
        for(ll i=1;i<n;i++){
            if(s[i]=='?'){
        if(s[i-1]=='B') s[i]='R';
        if(s[i-1]=='R') s[i]='B';}
        }
    }
    else{
    for(ll i=ind+1;i<n;i++){
        if(s[i]=='?'){
        if(s[i-1]=='B') s[i]='R';
        if(s[i-1]=='R') s[i]='B';}
    }
    for(ll i=ind-1;i>=0;i--){
      if(s[i]=='?'){
        if(s[i+1]=='B') s[i]='R';
        if(s[i+1]=='R') s[i]='B';}
    }
    }
    cout<<s;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}