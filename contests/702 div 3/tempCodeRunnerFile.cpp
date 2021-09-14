#include<bits\stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ll count=0;
        for(ll i=0;i<n-1;i++){
            ll c,b;
            c=min(a[i],a[i+1]);
            b=max(a[i],a[i+1]);
            if(b>2*c){
                while(b>2*c){
                    b=int(ceil(float(b/2)));
                    count++;
                }
            }

        }
        cout<<count<<endl;
    }

}