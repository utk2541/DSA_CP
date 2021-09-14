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
    ll b[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll diff=0;
    map<ll,ll> d1,d2;
    for(ll i=0;i<n;i++) {
        diff+=a[i]-b[i];
        if(a[i]-b[i]>0) d1[i]=a[i]-b[i];
        if(a[i]-b[i]<0)d2[i]=a[i]-b[i];
    
    }
   

    if(diff!=0) cout<<-1<<endl;
    else{
        ll k=1;
        vector<pair<ll,ll>> ans;
          auto it2=d2.begin();
        for(auto it=d1.begin();it!=d1.end();it2++){
          
            k=1;
            
            while(it2->second!=0){
            
                ans.push_back({it->first,it2->first});
                it->second--;
                it2->second++;
                if(it->second==0){ it++; k=0;}
                
            }
            
            
            }
           cout<<ans.size()<<"\n"; 
        for(auto p : ans){
            cout<<p.first+1<<" "<<p.second+1<<endl;
        }    

           
        

    }

    
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}