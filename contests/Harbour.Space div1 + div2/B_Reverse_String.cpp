#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
 
void solveCase()
{
    string s,t;
    cin >> s>>t;
 
   
 
    for(ll i=0;i<s.length();i++){
         string temp={};
            
        for(ll j=i;j<s.length();j++){
            temp.push_back(s[j]);
       
             
            if(j-(t.length()-temp.length())>=0){
                 string temp2=temp;
                 if(temp2==t){ cout<<"YES"<<endl; return (void)0;}
            for(ll k=j-1;k>=j-(t.length()-temp.length());k--){
                
                temp2.push_back(s[k]);
               if(temp2==t){ cout<<"YES"<<endl; return (void)0;}
              
                  
            }}
         
        }
          
 
    }
    
   
cout<<"NO";
    cout << "\n";
}
 
int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}