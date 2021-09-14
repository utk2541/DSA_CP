#include <iostream>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    if(b<=6*a && b>=a) cout<<"Yes";
    else cout<<"No";
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}