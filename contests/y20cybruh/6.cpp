#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{   ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m,count=0;;
        cin>>n>>m;
        ll a[n][m];
        ll row[n]={}, col[m]={};
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    row[i]++;
                    col[j]++;
                    count++;
                }
            }
        }
        int k=0;
        for(ll i=0;i<n;i++){
            if(row[i]<m && row[i]%2!=0){
                k=1;
               
            }
        }
        if(k!=1){
            for(ll i=0;i<m;i++){
            if(col[i]<n && col[i]%2!=0){
                
                k=1;
            }
        }
        }
        if(k==1) count++;
        cout<<count<<endl;

    }

        
}