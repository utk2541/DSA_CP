#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll t;
        cin>>t;
        while(t--){
            ll n,k;
            cin>>n>>k;
            ll a=1;
            for(ll i=0;i<k;i++){
                a=(a*n)%((ll)(1e9+7));
            }
            cout<<a<<endl;
            

        }

    return 0;
}
