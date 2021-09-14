#include <bits/stdc++.h>
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
        cin>>b;
        ll count=0;
        
        string::iterator ia,ib;
        ia=a.begin();
        ib=b.begin();
        while(a.length() || b.length()){
            
            
            if(a.length()>b.length()){
                if(a[0]==b[0]) {
                    a.pop_back();
                }
                else if(a[a.length()-1]==b[b.length()-1]){
                    a.erase(ia);
                }
                else{
                    a.pop_back();
                }
            }
            else if(b.length()>a.length()){
                if(a[0]==b[0]) {
                    b.pop_back();
                }
                else if(a[a.length()-1]==b[b.length()-1]){
                    b.erase(ia);
                }
                else{
                    b.pop_back();
                }
            }
            else{
                if(a.compare(b)==0){
                    break;
                }
                else{
                    a.pop_back();
                }
            }
            
            count++;
            ia=a.begin();
            ib=b.begin();
            count++;
        }
        cout<<count<<endl;


    }
    
    return 0;
}
