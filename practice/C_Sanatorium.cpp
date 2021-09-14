#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll b,d,s;
    cin>>b>>d>>s;
    
    ll ans=0;
    ll m=max(b,max(d,s));
    if(m-b>1) ans+=m-b-1;
    if(m-d>1) ans+=m-d-1;
    if(m-s>1) ans+=m-s-1;
    
    cout<<ans;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}