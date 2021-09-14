#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,x;
    cin >> n>>x;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++){cin>>a[i]; if(i%2!=0) a[i]--; sum+=a[i];}
    if(sum<=x) cout<<"Yes";
    else cout<<"No";
    

    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}