#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0,mx=0,mn=9999999,minp=0,maxp=0;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<mn){
            minp=i;
            mn=a[i];
        }
        if(a[i]>mx){
            maxp=i;
            mx=a[i];
        }
        
    }
    
    ll pointbitch;
    if(min(maxp,n-1-maxp)>min(minp,n-1-minp)){
        pointbitch=min(minp,n-1-minp);
        if(minp<maxp){
            maxp=maxp-pointbitch-1;
        }
        n=n-pointbitch-1;

        cout<<pointbitch+2+min(maxp,n-1-maxp)<<"\n";
    }
    else{
        pointbitch=min(maxp,n-maxp-1);
        if(maxp<minp){
            minp=minp-pointbitch-1;

        }
        n=n-pointbitch-1;
        cout<<pointbitch+2+min(minp,n-1-minp)<<"\n";
    }

  
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}