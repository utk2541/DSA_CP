#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase(ll t)
{   ll a[3][3]={};
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            if(i!=1 || j!=1) cin>>a[i][j];
        }
    }
    ll sum=0;
    for(ll i=0;i<3;i+=2){
        if(a[i][2]-a[i][1]==a[i][1]-a[i][0]) sum++;
    }
    for(ll i=0;i<3;i+=2){
        if(a[2][i]-a[1][i]==a[1][i]-a[0][i]) sum++;
    }
    map<double,ll> b;
    b[(double)((a[1][2]+a[1][0]))/2.0]++;
    b[(double)(a[0][1]+a[2][1])/2.0]++;
    b[(double)(a[0][0]+a[2][2])/2.0]++;
    b[(double)(a[0][2]+a[2][0])/2.0]++;
    ll max=0;
    
    for(auto i : b){
        if(i.second>max && round(i.first)==i.first) max=i.second;
    }
    cout<<"Case #"<<t<<": "<<max+sum;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    ll num=t;
    while (t--)
        solveCase(num-t);
}