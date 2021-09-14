#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,a,b;
    cin >> n>>a>>b;
    string s;
    cin>>s;
    ll count=1;
    vector<ll> zc,oc;
    for(ll i=1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            if(s[i-1]=='0'){
                zc.push_back(count);
                count=1;
            }
            else{
                oc.push_back(count);
                count=1;
            }
        }
    }
    if(s[n-1]=='0'){
                zc.push_back(count);
                
            }
    else{
                oc.push_back(count);
                
            }
              ll sum1=0,sum2=0;
        for(auto i: zc)
            sum1+=i;
        for(auto i: oc)
            sum2+=i;
 
      
        
            cout<<(sum1+sum2)*a+max((min(oc.size(),zc.size())+1)*b,(s.length())*b);
      

    
   

    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}