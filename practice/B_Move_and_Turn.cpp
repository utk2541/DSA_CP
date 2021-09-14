#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll n1= n/2;
    if(n%2==0) cout<<(n1+1)*(n1+1);
    else cout<<2*(n1+1)*(n1+2);
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}