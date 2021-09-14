#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s[4];
    for(ll i=0;i<4;i++)
    cin >> s[i];
    ll a[4]={};
    for(ll i=0;i<4;i++){
        if(s[i]=="H") a[0]++;
        if(s[i]=="2B") a[1]++;
        if(s[i]=="3B") a[2]++;
        if(s[i]=="HR") a[3]++;

    }
    ll k=0;
    for(ll i=0;i<4;i++){
        if(a[i]!=1) k=1;
    }
    if(k==1) cout<<"No";
    else cout<<"Yes";
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}