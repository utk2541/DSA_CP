#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        double u,v,a,s;
        cin>>u>>v>>a>>s;
        if(v*v>=u*u-2*a*s ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
