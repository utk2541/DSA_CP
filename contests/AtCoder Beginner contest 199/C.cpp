#include<iostream>
#include<string>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll n;
        cin>>n;
        string s,s1,s2,s3;
        cin>>s;
        s1=s.substr(0,n);
        s2=s.substr(n,2*n-1);
        ll q;
        cin>>q;
        
        
        while(q--) {
            ll t,a,b;
            char temp;
            cin>>t>>a>>b;
            
            a--;
            b--;
            if(t==1){
            if(a<n && b>=n){
          
                temp=s1[a];
               
              s1[a]=s2[b-n];
                
              s2[b-n]=temp;
              
            }

            else if(b<n && a>=n){
                temp=s2[a-n];
              s2[a-n]=s1[b];
              s1[b]=temp;}
            else if(b>=n && a>=n) {
                temp=s2[a-n];
              s2[a-n]=s2[b-n];
              s2[b-n]=temp;
            }
            else if(b<n && a<n){
                temp=s1[a];
              s1[a]=s1[b];
              s1[b]=temp;
            }
            
            }
            if(t==2){
                s3=s1;
                
                s1=s2;
                
                s2=s3;
            }
            
        }
        s3=s1+s2;
        cout<<s3;

    return 0;
}
