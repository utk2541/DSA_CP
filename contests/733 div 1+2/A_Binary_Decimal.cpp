#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string n;
    cin >> n;
    ll num=1;
    for(auto i : n){
        ll t= i-'0';
        if(t>num) num=t;
    }
    cout<<num;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}