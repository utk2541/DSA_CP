#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string n;
    cin >> n;
    map<char,ll> b;
    for(auto c : n){
        b[c]++;
      
    }
    ll count=0;
    for(auto i : b){
        if(i.second>2) count+=2;
        else count+=i.second;
    }
    ll k=count/2;
    cout<<k;
    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}