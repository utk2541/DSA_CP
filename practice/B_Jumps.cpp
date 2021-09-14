#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll y=0;
    
    ll count=0;
    for(ll i=1;y<=n;i++){
        
        if(y+i==n){
            count++;
            break;
        }
        
        if(y+i>n){
            if(y+i-n<2 ) count++;
            count++;
            
            break;
        }
       count++;
        y+=i;
    }
    
    cout<<count;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}