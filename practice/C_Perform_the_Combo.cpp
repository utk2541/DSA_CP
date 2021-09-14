#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m;
    cin >> n >>m;
    string s;
    cin>>s;
    ll a[m];
    for(ll i=0;i<m;i++) cin>>a[i];
    ll cnt[26]={};
    ll p[n]={};
    for(ll i=0;i<m;i++){
        p[a[i]-1]++;
       
     
    }
    for(ll i=n-1;i>=0;i--) p[i-1]+=p[i];
    for(ll i=0;i<n;i++){cnt[s[i]-'a'] +=p[i];}
    for(ll i=0;i<n;i++) cnt[s[i]-'a']++;
    for(ll i=0;i<26;i++) cout<<cnt[i]<<" ";
   
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}