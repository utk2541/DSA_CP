#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
 
void solveCase()
{
    ll str,intl,exp;
    cin>>str>>intl>>exp;
    ll minaddstr= max((ll)0,(exp + intl - str + 2) / 2);
    ll ans=max(exp-minaddstr+1,(ll)0);
    cout<<ans;
    cout << "\n";
}
 
int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}