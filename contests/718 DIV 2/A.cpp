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
            
            string s = to_string(n);
            
            ll stuff=0;
            ll num=n/2050;
            
            if(n%2050!=0) cout<<-1<<endl;
            else{
                while(num>0){
                    stuff+=num%10;
                    num/=10;
                }
                cout<<stuff<<endl;
            }
        }

    return 0;
}
