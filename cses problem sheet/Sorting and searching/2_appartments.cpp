#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n],b[m];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<m;i++) cin>>b[i];
        sort(a,a+n); sort(b,b+m);
        ll count=0,num=b[0];
        for(ll i=0,j=0;i<n,j<m;i++){
            if(abs(a[i]-b[j])>k){
                if(b[j]>a[i]){
                    

                }
                else{
                    i--;
                    j++;
                    
                }
            }
            else{
                j++;
                count++;
            }
           
        }
        cout<<count;
    return 0;
}
