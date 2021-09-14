#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    char a[n][n];
    ll count=0;
    for(ll i=0;i<n;i++) for(ll j=0;j<n;j++) cin>>a[i][j];
    for(ll i=1;i<n-1;i++) for(ll j=1;j<n-1;j++){
        if(a[i][j]=='X' && a[i][j]==a[i+1][j+1] && a[i][j]==a[i-1][j-1] && a[i][j]==a[i+1][j-1] && a[i][j]==a[i-1][j+1]){
            count++;
        }
    }
    cout<<count;
    cout << "\n";
}

int32_t main()
{  solveCase();
}