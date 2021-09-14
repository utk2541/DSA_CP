#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m;
    cin >> n >> m;
    ll a[n][m];

    ll tmp; 
    
    for(ll i=0;i<n;i++) {
        for(ll j=0;j<m;j++){
            cin>>tmp;
            a[i][j]=tmp;
        }
    }
    for(ll i=0;i<n;i++) sort(a[i],a[i]+m);
    for(ll i=m-1;i>0;i--){
        
        ll k=0;
        for(ll j=0;j<n;j++){
            
            if(a[k][0]>a[j][0]) k=j;


        }
       rotate(a[k],a[k]+1,a[k]+i+1);
    }

    for(ll i=0;i<n;i++) {for(ll j=0;j<m;j++) cout<<a[i][j]<<" "; cout<<endl;}



    
    
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}