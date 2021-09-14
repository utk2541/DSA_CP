#include<bits\stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll n,t;
        cin>>n>>t;
        string a,b;
        char m;
        cin>>a;
        b=a;
        
        for(ll i=0;i<n;i++) b[i]=a[i];
        for(ll j=0;j<t;j++){
        for(ll i=0;i<n-1;i++){
            if(a[i]=='B'&& a[i+1]=='G') {
               b[i+1]=a[i];
               b[i]=a[i+1];
               i++;
            }
            a=b;
        }}
        cout<<b;
    return 0;
}
