#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    vector<ll> v[5];
    vector<ll> p(n);
    for(ll j=0;j<n;j++){
        for(ll i=0;i<5;i++){
            ll t;
            cin>>t;
            v[i].push_back(t);
            
        }
    }
    
    if(n==1) cout<<1;
    else{
    for(ll i=0;i<5;i++){
       ll m=100000;
       ll temp=-1;
        for(ll j=0;j<n;j++){
            if(v[i][j]<m){ m=v[i][j]; temp=j;  } 
            
                  }
        p[temp]++;
      
    }
    
    ll stuff=-1;
    ll index=-1;
    for(ll i=0;i<n;i++){
        if(p[i]>stuff){ stuff=p[i]; index=i; } 
       
    }
    vector<ll> q(n);
    for(ll i=0;i<n;i++){
        ll count=0;
        if(i==index) i++;
        for(ll j=0;j<5;j++) {

            if(v[j][i]>v[j][index]) count++;
        }
        if(count>=3) q[index]++;
        else q[i]++;
        
    }
    ll stuff2=-1;
    for(ll i=0;i<n-1;i++){
        if(q[i]!=q[i+1]) { stuff2=0; break;}
    }
    if(stuff2==0){
    stuff=-1;
    ll ans=-1;
    for(ll i=0;i<n;i++){
        if(q[i]==n-1){ ans=i+1; } 
       
       
    }
   
    cout<<ans;}
    else cout<<-1;
    
    }

    cout << "\n";
}

int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}