#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k<=n/2) cout<<2*k-1<<endl;
        else cout<<2*(k-(n/2))<<endl;
    }
    else {
        if(k<=(n/2 +1 )) cout<<2*k-1<<endl;
        else cout<<2*(k-n/2-1)<<endl;
    }

    
    return 0;
}
