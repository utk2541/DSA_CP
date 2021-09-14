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
            string s,ans="YES";
            cin>>s;
            map<char,ll> a;
            for(ll i=0;i<n;i++){
                if(a[s[i]]>0 && s[i-1]!=s[i]) ans = "NO";
                
                a[s[i]]++;
            }
            cout<<ans<<endl;
            
            
        }
    return 0;
}
