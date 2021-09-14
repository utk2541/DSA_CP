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
            string s= to_string(n);
            ll n1=n;
            while(n1>=10){
                n1/=10;
            }
            ll num2=0;
           
            for(ll i=0;i<s.length();i++){
                num2=num2*10+1;
            }
            
            num2*=n1;
            
            if(n<num2) cout<<(s.length()-1)*9+n1-1<<endl;
            else cout<<(s.length()-1)*9+n1<<endl;
        }
    return 0;
}
