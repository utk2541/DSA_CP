#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin>>s;
    ll a,b;
    ll f=0;
    ll len=s.length();
    for(ll i=1;i<=5;i++){
        for(ll j=1;j<=20;j++){
            if(i*j>=len){
                a=i; b=j; f=1;
                break;
            }
        }
        if(f==1) break;
    }
    cout<<a<<" "<<b<<"\n";
    ll k= a*b - len;
    ll point=0;
    for(ll i=0;i<a;i++){
        for(ll j=0;j<b-((k==0)?0:1);j++){
            cout<<s[point];
            point++;

        }
        if(k!=0){
            cout<<'*';
            k--;
        }
        cout<<'\n';
    }
    cout << "\n";
}

int32_t main()
{
        solveCase();
}