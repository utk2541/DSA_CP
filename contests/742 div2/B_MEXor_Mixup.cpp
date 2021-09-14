#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    ll c=0;
    ll k=(a-1)%4;
    if(k==0) c=a-1;
    else if(k==1) c=1;
    else if(k==2) c=a;
    else if(k==3) c=0;

    
   if(c==b) cout<<a;
   
  else if((c^a)==b) cout<<a+2;
    
    else cout<<a+1;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}