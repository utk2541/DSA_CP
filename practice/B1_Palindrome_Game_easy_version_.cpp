#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    string s;
    cin>>s;
    ll n0=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0') n0++;
    }
    
    if(n%2==1 && s[n/2]=='0' && n0!=1) cout<<"ALICE";
    //else if(n%2==1 && s[n/2]=='0' && (n0-1)%6>=4 && (n0-1)%6<6) cout<<"DRAW";
    //else if(n0%6==0) cout<<"DRAW";

    else cout<<"BOB";
    cout << "\n";//1,r,1,1,r,1
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}