#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,q;
    cin >> n >>q;
    while(q--){
        ll x,y;
        ll ans;
        cin>>x>>y;
        if((x+y)%2==0){
            if(x%2==0){
                ans=((x-2)/2)*n + ceil(n/2.0)+ ((y)/2);
                
            }
            else{
                ans=((x-1)/2)*n + y/2+1;
            }
        }
        else{
            if(x%2==0){
               
                ans=ceil((n*n)/2.0)+((x-2)/2)*n + ((n)/2) + y/2+1;
              
            }
            else{
                ans=ceil((n*n)/2.0)+((x-1)/2)*n + ((y)/2);
            }
        }
        cout<<ans << "\n";
    }

    
}

int32_t main()
{
    
        solveCase();
}