#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
       
        if(max(a,b)==1) cout<<"NO"<<endl;
        else if((a+b)%3==0) cout<<"YES"<<endl;
        
        else cout<<"NO"<<endl;

     
    }
    
    return 0;
}
