#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m,k;
    cin >> n >>m>>k;
    ll a[m+1];
    for(ll i=0;i<m+1;i++){
        cin>>a[i];
    }
    ll count1=0;
    

        ll i=m;
        for(ll j=0;j<m;j++){
            ll b= a[i]^a[j];
            ll count=0;
            string c=bitset<20>(b).to_string();
           
            for(ll k=19;k>19-n;k--){
                if(c[k]=='1') count++;
            }
            if(count<=k) count1++;
            
        

    }
    cout<<count1;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}