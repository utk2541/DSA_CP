#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll t;
        cin>>t;
    while(t--){
        ll n,k,count=0;
        cin>>n>>k;
        ll a[n]={};
        if(n%2==0){
            if(k>(n-1)/2) cout<<-1<<endl;
            else{
                for(ll i=0,l=0,j=n-k+1;i<n;i++,l++){
                    a[i]=l+1;
                    if(j<=n){
                        i++;
                        a[i]=j;
                        j++;
                    }
                }
                for(ll i=0;i<n;i++) cout<<a[i]<<" ";
                cout<<endl;
            }
        }
        else{
            if(k>n/2) cout<<-1<<endl;
            else{
                for(ll i=0,l=0,j=n-k+1;i<n;i++,l++){
                    a[i]=l+1;
                    if(j<=n){
                        i++;
                        a[i]=j;
                        j++;
                    }
                }
                for(ll i=0;i<n;i++) cout<<a[i]<<" ";
                cout<<endl;
            }
        }
        
           }
        return 0;
}
