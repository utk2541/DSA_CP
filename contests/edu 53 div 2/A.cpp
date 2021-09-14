#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll k=0,i=1;
    for(i=1;i<n;i++){
        if(s[i]!=s[i-1]){k=1;break;}
    }
    if(k==1){
        cout<<"YES"<<endl;
        for(ll j=i-1;j<=i;j++) cout<<s[j];
        cout<<endl;
    }
    else cout<<"NO"<<endl;
}

int32_t main()
{
    
        solveCase();
}