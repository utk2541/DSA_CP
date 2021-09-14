#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll> b;
    for(char i='A';i<'A'+k;i++){
        b[i]=0;
    }
    for(ll i=0;i<n;i++) {
        b[s[i]]++;
    }
    ll m=1000000,count=0;
    for(auto it=b.begin();it!=b.end();it++) {
        if(it->second<m){
            m=it->second;
        }
    count++;
    }
    cout<<m*count;
    
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}