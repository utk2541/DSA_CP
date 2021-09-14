#include <iostream>
#include<string>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin >> s;
    ll ind=s.length()-1;
    for(ll i=s.length()-1;i>=0;i--){
        if(s[i]!='0') {
            ind=i;
            break;
        }
    }
    ll n=ind;
    ll k=1;
    for(ll i=ind;i>n/2;i--){
        if(s[i]!=s[n-i]) {
            k=0;
            break;
        }
    }
    if(k==0) cout<<"No";
    else cout<<"Yes";
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}