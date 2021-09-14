#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll t;
        cin>>t;
        while(t--){
            vector<pair<ll,ll>> b;
            ll n; cin>>n;
            char a[n][n];
            for(ll i=0;i<n;i++){
                for(ll j=0;j<n;j++){
                    cin>>a[i][j];
                    if(a[i][j]=='*'){
                        b.push_back({i,j});
                    }
                }
            }
            if(b[0].first==b[1].first){
                if(b[0].first==n-1){
                a[b[0].first-1][b[0].second]='*';
                a[b[1].first-1][b[1].second]='*';
                }
                else{
                a[b[0].first+1][b[0].second]='*';
                a[b[1].first+1][b[1].second]='*';}
            }
            else if(b[0].second==b[1].second){
               if(b[0].second==n-1){
                a[b[0].first][b[0].second-1]='*';
                a[b[1].first][b[1].second-1]='*';
                }
                else{
                a[b[0].first][b[0].second+1]='*';
                a[b[1].first][b[1].second+1]='*';}
            }
            else {
                a[b[0].first][b[1].second]='*';
                a[b[1].first][b[0].second]='*';
            }
            for(ll i=0;i<n;i++){
                for(ll j=0;j<n;j++){
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        }

    return 0;
}
