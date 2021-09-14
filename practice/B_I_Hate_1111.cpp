#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
   
    if(n>1099)cout<<"YES";
    else{
        if(n>=111*(n%11)) cout<<"YES";
        
        else cout<<"NO";
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