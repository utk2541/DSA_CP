#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        ll k=a.length()/2;
        if(a.length()%2==0){
            k=a.length()/2-1;
        }
        ll r=0;
        for(ll i=0;i<a.length();i++){
            if(a[i]=='a' && i==k && a[0]!='a'){
                b=a;
                b.push_back('a');
                r=1;
                break;}
            else if(a[i]=='a' && i==k){
                b=a;
                b.insert(i+1,"a");
                r=1;
                break;
            }
            else if(a[i]=='a' && a[a.length()-1-i]==a[i]){
                b=a;
                b.insert(i+1,"a");
                r=1;
                break;
            }
        }
       if(r==1){
           cout<<"YES"<<endl<<b<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    
    return 0;
}
