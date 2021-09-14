#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll n,s,t;
        cin>>n>>s>>t;
        ll a[n],count=0;
        
        for(ll i=0;i<n;i++) {cin>>a[i]; }
        ll temp;
        while(s!=t && a[s-1]!=0){
        temp=s;
        s=a[s-1];
        a[temp-1]=0;
        count++;
     
        
        }
        if(s==t) cout<<count<<endl;
        else cout<<-1<<endl;
        
    return 0;
}
