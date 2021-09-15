#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    string s;
    cin>>s;
    ll count=0;
    vector<ll> mine;
    ll cost=0;
    for(auto c : s){
        count++;
        if(c=='1') {mine.push_back(count);}

    }
    if(mine.size()>0) cost=a;
    if(mine.size()>1){
    for(ll i=1;i<mine.size();i++){
        if((b*(mine[i]-mine[i-1]-1)) < (a)) cost+=b*(mine[i]-mine[i-1]-1);
        else cost+=a;
    }
    }
    cout<<cost;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}