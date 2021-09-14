#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,m;
    cin >> n >> m;
    string s[n];
     string t[n-1] ;
    for(ll i=0;i<n;i++){ cin>>s[i];  } 
   
    
    for(ll i=0;i<n-1;i++) cin>>t[i];
   
    vector<string> stuff;
    
    for(ll i=0;i<m;i++){
        string temp;
        for(ll j=0;j<n;j++){
            temp.push_back(s[j][i]);
            
           
            
        }
        
        
        sort(temp.begin(),temp.end());
        
        stuff.push_back(temp);
        temp.erase();
    }
    
    vector<string> stuff2;
    for(ll i=0;i<m;i++){
        string temp={};
        for(ll j=0;j<n-1;j++){
            temp.push_back(t[j][i]);
        }
        sort(temp.begin(),temp.end());
        stuff2.push_back(temp);
        
    }
    string ans;
    
    for(ll i=0;i<stuff.size();i++){
        ll r=0;
        char c;
        
        for(ll j=0;j<n-1;j++){
           
            if(stuff[i][j]!=stuff2[i][j]){ c=stuff[i][j]; r=1; break;
            
    }     }
  
    if(r==0) c=stuff[i][n-1];
    ans.push_back(c);
    
       
    }
    std::cout<<ans;
    std::cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}