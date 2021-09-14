#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

int32_t main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,ll> m;
    for(ll i=0;i<s.length();i++) {
        m[s[i]]++;
    }
    ll max=0;
    char c='z';
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second>max){
            
            max=it->second;
            c=it->first;
        }
        if(it->second==max && c>(it->first)){
            
            max=it->second;
            c=it->first;
        }
      
    }
    cout<<c<<" "<<max<<endl;
   
}