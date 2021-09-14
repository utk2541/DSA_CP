#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    if(n%2==0) cout<<n/2<<" "<<n/2;
    else{
        ll k=1;
        for(ll i=3;i*i<=n;i+=2){
            if(n%i==0) {k=i; break;}
        }
        if(k==1) k=n;
    cout<<n/k<<" "<<n-n/k;
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