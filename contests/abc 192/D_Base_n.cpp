#include <iostream>
 #include <string>
#include <cmath>
using namespace std;
#define ll unsigned long long int
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
bool stringcompare(string s1,string s2){
    if(s1.length()<s2.length()) return true;
    else if(s1.length()==s2.length()){
        for(ll i=0;i<s1.length();i++){
            
            if(s1[i]<s2[i]) {
                
                return true;
            }
            else if(s1[i]>s2[i]) return false;
 
        }
        return true;
    }
    return false;
}
void solveCase()
{
    string s;
    ll m;
    cin >>s >>m;
    char c='0';
    for(ll i=0;i<s.length();i++) if(s[i]>c) c=s[i];
    ll d = c-'0';
    
    ll count=0;
   
    string k=s;
    ll num=0;
    if(s.length()==1 && stringcompare(s,to_string(m))) cout<<1;
    else if(s.length()==1 && !stringcompare(s,to_string(m)) ) cout<<0;
    else{
    ll lo=d;
    ll hi=m+1;
 
    while(hi-lo>1){
        ll mid=  (hi+lo)/2;
        ll temp=0;
        bool flag=false;
        for(ll i=0; i<k.length();i++){
            ll t=k[i]-'0';
            if(temp>m/mid) {
                flag=true;
                break;
            }
            temp=temp*mid+t;
          
        }
        
        if(flag||temp>m){
            hi=mid;
        }
        else {
            lo=mid;
        }
     
        
        
    }
    count=max(lo-d,(ll)0);
    cout<<count;}
    cout << "\n";
}
 
int32_t main()
{
   
        solveCase();
        return 0;
}