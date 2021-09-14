#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m;
    cin >> n >>m;
    vector<string> o(n),o1(n);
    string os[m];
    string os1;
    for(ll i=0;i<n;i++){cin>>o[i]; }
    for(ll i=0;i<m;i++){
        string temp;
        for(ll j=0;j<n;j++){
            temp.push_back(o[j][i]);
        }
       sort(temp.begin(),temp.end());
       os1.append(temp);
    }
    o1=o;
    for(ll i=0;i<n;i++){
        sort(o1[i].begin(),o1[i].end());
    }
    
    
 
    string s[n-1];
    string ss[n-1];
    string ss1;
    for(ll i=0;i<n-1;i++){ cin>>s[i];}
    for(ll i=0;i<m;i++){
        string temp;
        for(ll j=0;j<n-1;j++){
           temp.push_back(s[j][i]);
        }
       sort(temp.begin(),temp.end());
       ss1.append(temp);
      
    }
    string ans1;
  
    for(ll i=0,j=0;i<os1.length();i++){
        if(os1[i]!=ss1[j]){
            ans1.push_back(os1[i]);
       
        }
        else j++;
          
    }
  if(ans1.length()<m) ans1.push_back(os1[os1.length()-1]);

   
    
    cout<<ans1<<flush;



    cout << "\n"<<flush;
  
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}