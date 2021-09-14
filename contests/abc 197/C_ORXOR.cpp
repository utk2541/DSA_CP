#include <iostream>
#include<vector>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    
    ll ornum=a[0];
    vector<ll> v;
    ll max=a[1],j=1;
    for(ll i=1;i<n;i++){
        if(a[i]>=max){
            j=i;
            max=a[i];
        }
    }
    for(ll i=0;i<n;i++){
        
        ll temp=ornum|a[i];
        
        if(temp<ornum){
            v.push_back(ornum);
         
            
            ornum=a[i];
        }
        else if(i==j){
            v.push_back(ornum);
   
             ornum=a[i];
           
        
        }
        else{
            ornum=ornum|a[i];
        }
    }
    v.push_back(ornum);
   
   
    ll ans=v[0];
    
    for(ll i=1;i<v.size();i++){
    
        ans=ans^v[i];
    }
    cout<<ans;

    cout << "\n";
}

int32_t main()
{
    
        solveCase();
        return 0;
}