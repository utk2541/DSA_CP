#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,b;
    cin >> n >>b;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll cnt1=0,cnt2=0;
    vector<ll> cost;
    ll count2=0;
    ll count=0;
    for(ll i=0;i<n-2;i+=2){
        if(a[i]%2==0) cnt1++;
        else cnt2++;
        if(a[i+1]%2==0) cnt1++;
        else cnt2++;
        if(cnt1==cnt2 ){
            
            cnt1=0;
            cnt2=0;
            cost.push_back(abs(a[i+1]-a[i+2]));
            
        }

    }
    sort(cost.begin(),cost.end());
    for(auto i : cost){
        
        count2+=i;
         if(count2>b)break;
         count++;

    }
    cout<<count;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}