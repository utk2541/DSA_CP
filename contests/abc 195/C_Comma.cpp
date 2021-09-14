#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ;
    cin >> n;
    if(n<1000) cout<<0;
    else{
        ll k=1000;
        ll sum=0;
        for(ll i=0;i<5;i++){
            if(n<k) break;
            else{
                sum+=(i+1)*(min(k*1000-1,n)-k+1);
                
            }
            k*=1000;
        }
        cout<<sum;
    }
   
    
    



    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}