#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1==r2){
        cout<<r1<<" "<<l2;
    }
    else 
    cout<<min(l1,r1)<<" "<<max(l2,r2);
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}