#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    ll a1=1,b1=b%10;
    ll k=0;
    if(b-a>=10) cout<<0;
    else{
    for(ll i=(a+1)%10;i!=b1;i=(i+1)%10){
   
        a1*=i;
        
    }
   
    a1*=b1;
    if(b>a)
    cout<<a1%10;
    else if(b==a) cout<<1;
    }
    cout << "\n";
}

int32_t main()
{
 
        solveCase();
}