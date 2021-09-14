#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;



int32_t main()
{
    ll t = 0;
    map<ll,ll> m;
    for(int i=0;i<4;i++) m[i]+=i;
    cout<<(*(&m[2])+1)<<endl;
}