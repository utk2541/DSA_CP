#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin>>s;
    
    map<char,ll> b;
    for(ll i=0;i<s.length();i++){
        b[s[i]]++;
    }
    string temp;
    for(ll i=0;i<min(b['U'],b['D']);i++){
        temp.push_back('U');
    }
    for(ll i=0;i<min(b['R'],b['L']);i++){
        temp.push_back('R');
    }
    for(ll i=0;i<min(b['U'],b['D']);i++){
        temp.push_back('D');
    }
    for(ll i=0;i<min(b['R'],b['L']);i++){
        temp.push_back('L');
    }
    if((b['U']==0|| b['D']==0) &&(b['L']>1 && b['R']>1)){
        temp="LR";
    }
    if((b['L']==0|| b['R']==0) &&(b['U']>1 && b['D']>1)){
        temp="UD";
    }
    if(temp.length()==0)
    cout<<0<<"\n";
    else cout<<temp.length()<<"\n"<<temp<<"\n";
    
    
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}