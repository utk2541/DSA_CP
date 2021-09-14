#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll k=0;
    ll   i=1;
   ll j=pow(2,i)-1;
    
    while(n>=j*(j+1)/2){
            n=n- j*(j+1)/2;
            i++;
            j= pow(2,i)-1;
            k++;
        }
    cout<<k;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}