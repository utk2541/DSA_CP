#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
         ll t;
         cin>>t;
         while(t--){
             ll n;
             cin>>n;
             ll c=0;
             if(n==2){cout<<-1<<endl;}
             else{
             vector<ll> v;
             for(ll i=0;i<n*n;i+=2) v.push_back(i+1);
             for(ll i=1;i<n*n;i+=2) v.push_back(i+1);
             for(ll i=0;i<n && c<n*n ;i++){
                 for(ll j=0;j<n;j++,c++) cout<<v[c]<<" ";
                 cout<<endl;
             }
             }

         }
    return 0;
}
