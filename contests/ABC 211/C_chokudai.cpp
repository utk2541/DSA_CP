#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin >> s;
    string p="chokudai";
    ll k=0;
    ll count[8]={};
    map<char,ll> stuff;
    
    ll j=0;
    for(auto c : p){ stuff[c]=j++; }
    for(auto c :s){
       
          count[stuff[c]]++;
       
    }
    ll ans=1;
    for(auto i : count){
        ans=(ans%mod*i%mod);
        if(ans==0) break;
    }
    if(ans==0) cout<<0;
    else{
      ll ans1=1;
      ll temp=ans/count[stuff['c']];
    for( auto c : s){
        cerr<<"hello";
        temp=ans/count[stuff[c]];
        ans1=ans1%mod+temp%mod;
        count[stuff[c]]--;
    }
    cout<<ans1;
    }
    cout << "\n";
}

int32_t main()
{
 
        solveCase();
}