#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;


void solveCase()
{
    
    count1=0;
    count2=0;
    string s;
    cin>>s;
    solve2(0,s);

    cout << "\n";
    ans.clear();
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}