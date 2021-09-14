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
    string t=s;
    ll count=0;
    sort(s.begin(),s.end());
    for(ll i=0;i<n;i++){
        if(s[i]!=t[i]) count++;
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