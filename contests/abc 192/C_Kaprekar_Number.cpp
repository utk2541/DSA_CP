#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,k;
    cin >> n >>k;
  
    for(ll i=1;i<=k;i++){
    ll num=n;
    vector<ll> v={};
    while(num>0){
        v.push_back(num%10);
        num/=10;
    }
    sort(v.begin(),v.end());
    ll g1=0,g2=0;
    for(auto it :v){
        g2=g2*10+it;
        
    }
    for(auto it=v.rbegin();it!=v.rend();it++){
        g1=g1*10+(*it);
    }
    n=g1-g2;
    }
    cout<<n;
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}