#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m;

    cin >> n>>m;
    ll a[m];
    for(ll i=0;i<m;i++) cin>>a[i];
    ll b[n]={};
    ll sum=0;
    for(ll i=0;i<m;i++){
        if(b[a[i]-1]==0 ){
            sum+=a[i];
            b[a[i]-1]=1;

        }
        if(sum==(n*n+n)/2){
            cout<<1;
            sum=0;
            memset(b, 0, sizeof(b));
        }
        else cout<<0;
    }

    cout << "\n";
}

int32_t main()
{
        solveCase();
}