#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n , k;
    cin >> n >> k;
    if(n%2!=0){
       cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2;
    }
    else{
        if(n%4==0) cout<<n/2<<" "<<n/4<<" "<<n/4;
        else {
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2;
        }
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