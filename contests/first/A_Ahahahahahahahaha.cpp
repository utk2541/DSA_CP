#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    ll f=0;
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i=0;i<n;i++){ if(a[i]==1) { f=i; break;}}

    vector<ll> ans;
   
   
    ll k=0;

    for(ll i=0;i<n;i++){
        
        if(a[i]==1){
            ll j=i+1;
            k++;
           
            vector<ll> q;
            q.push_back(a[i]);
            while(a[j]!=1 && j<n){
                 q.push_back(a[j]);
                j++;
               
            }
            if(j%2==i%2 && j<n){
                q.pop_back();
                q.push_back(a[j]);
            } 
            else if(j<n){
                q.push_back(a[j]);
            }
            if(q[q.size()-1]==1 && q.size()>1){
                for(auto i : q){
                    ans.push_back(i);
                }
            }
            else{
                for(ll i =1 ;i<q.size();i++){
                    ans.push_back(q[i]);
                }
            }
            
            i=j;
        }
        else{
            ans.push_back(a[i]);
        }
        
    }

    
    
   cout<<ans.size()<<endl;
    for(auto i : ans) cout<<i<<" ";
  
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}