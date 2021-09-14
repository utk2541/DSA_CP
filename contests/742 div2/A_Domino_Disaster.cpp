#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string n;
    ll k;
    cin>>k;
    cin >> n;
    for(char c: n){
        if(c=='U') cout<<'D';
        else if(c=='D') cout<<'U';
        else cout<<c;
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