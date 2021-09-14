#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    ll t;
    cin>>t;
    while(t--){
        cin>>a;
        if(360%(180-a)==0 && a>=60) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
