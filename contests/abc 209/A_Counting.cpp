#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    if(b<=a) cout<<0;
    else
    cout<<b-a+1;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}