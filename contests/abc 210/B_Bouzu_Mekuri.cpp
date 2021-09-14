#include <bits/stdc++.h>
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
    ll count=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){
            count=i;
            break;
        }
    }
    if(count%2==0)cout<<"Takahashi";
    else cout<<"Aoki";
    cout << "\n";
}

int32_t main()
{
  
        solveCase();
}