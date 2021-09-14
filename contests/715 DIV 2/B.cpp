#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll t;
        cin>>t;
        while(t--){
            ll n,k=0;
            cin>>n;
            string s;
            cin>>s;
            ll p=0;
            
            unordered_map<char,ll> b;
            for(ll i=0;i<n;i++) {
                b[s[i]]++;
                if(s[i]=='M' && b['M']>b['T']) k=1;
                if((2*n/3)-b['T']< (n/3)-b['M']) k=1;
                
            }
            if(2*b['M']!=b['T']) k=1;
            if(s[n-1]=='M')k=1;
           
            /*for(ll i=0;i<n;i++){
                if(s[i]=='M') p-=2;
                if(s[i]=='T') p+=1;
                if((p>0 && n-i-1<p) || (p<0 && p+(n-i-1)<0 ) ) k=1;
                b[s[i]]++;
                if(s[i]=='M' && b['M']>b['T']) k=1;
                

            }*/
            if(k==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    return 0;
}
