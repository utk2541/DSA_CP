#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll m,n,x,r,c;
       cin>>n>>m>>x;
       if(x%n==0){
           r=n;
           c=x/n;
       }
       else{
           r=x%n;
           c=x/n+1;
       }
       ll num;
       if(c==m){
           num=r*m;

       }
       else{
           num=(r-1)*m +c;
       }
       cout<<num<<endl;

    }
    
    return 0;
}
