#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,m;
    cin >> n>>m;
    vector<vector<ll>> a(n,vector<ll> (m,0));
    for(ll i=0;i<n;i++){ string s;
                        cin>>s;
    for(ll j=0;j<m;j++){ a[i][j]=s[j]-'0'; } }
    vector<ll> b(m);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) b[j]+=a[i][j]; 
    }
    for(ll i=0;i<n;i++){
        vector<ll> temp=b;
        for(ll j=0;j<m;j++) {
            temp[j]-=a[i][j];
           
        }
     
        ll k=0;ll l=-1;
        for(ll j=0;j<m;j++){

            if(temp[j]==0){ k=1; l=j;
             break;}
        }
            
        if(k==0){
        
            cout<<"YES";
            return (void)0;
        }
    }
    

    cout << "NO";
}

int32_t main()
{
   
        solveCase();
}