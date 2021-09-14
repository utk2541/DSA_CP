#include<bits\stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll b[3]={};
        for(ll i=0;i<n;i++){
            b[a[i]%3]++;
        }
        ll sum=0,max=0,pos=0; 
        for(ll i=0;i<3;i++){
            sum+=b[i];
            if(b[i]>max){
                max=b[i];
                pos=i;
            }
        }
        
        ll sum2=0;
        while(b[])
        
        
        cout<<sum2<<endl;

    
                }
    }

