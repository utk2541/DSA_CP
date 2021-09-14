#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll check=0;
    for(ll i=0;i<n-1;i++){
        ll temp=a[i]&a[i+1];
        if(temp!=a[i]) check=1; 
    }
   
    if(n==1 || check==0){
        for(ll i=0;i<n;i++) cout<<0<<" ";
    }
    else{
        ll b[n];
     
        b[0]=0;
        ll num=a[0]^b[0];
        for(ll i=1;i<n;i++){
            b[i]=(num|a[i])^a[i];
            num=a[i]^b[i];
   
         
          
           
        
    }

    for(ll i=0;i<n;i++) cout<<b[i]<<" ";}
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}