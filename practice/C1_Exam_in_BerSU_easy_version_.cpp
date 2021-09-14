#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,m;
    cin >> n>>m;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll ans[n];
    ll sum=a[0];
    ans[0]=0;
    for(ll i=1;i<n;i++){
        ll count=0;
        ll sum1=sum;
        ll b[i]={};
        for(ll j=0;j<i;j++){
            b[j]=a[j];
        }
        sort(b,b+i);
        ll j=i-1;
        while(j>=0 && sum1+a[i]>m){
            sum1-=b[j];
            count++;
            j--;
        }
        ans[i]=count;
        sum+=a[i];
        
    }
    for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}