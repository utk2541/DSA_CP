#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
 
void solveCase()
{
    ll n = 0;
    cin >> n;
  vector<pair<ll,ll>> a(n,{0,0});
  for(ll i=0;i<n;i++) {
      ll t;
      cin>>t;
      a[i].first=t;
      a[i].second=i;
  }
  ll c1=0,c2=0;
  ll count=0;
  ll k=a[0].first%2;
  for(ll i=0;i<n;i+=2){
      if(a[i].first%2==k) c1++;
      else c2++;
  }
  if( c2>c1 ){
      ll t=a[0].first;
      a[0].first=a[1].first;
      a[1].first=t;
      count+=2;
    
  }
  k=a[0].first%2;
    vector<pair<ll,ll>> v1,v2;
    
    v1.push_back(a[0]);
 
  for(ll i=1;i<n;i++){
      if(a[i].first%2==k) v1.push_back(a[i]);
      else v2.push_back(a[i]);
     // cerr<<a[i].first<<endl;
  }
// cerr<<v1.size()<<" "<<v2.size()<<endl;
  if(!(v1.size()==n/2 || v2.size()==n/2)) cout<<-1;
 
  else{
     
      
      ll i1=0,i2=0;
      for(ll i=0;i<n;i++){
          if(i%2==0){
              count+=abs(i-v1[i1].second);
              i1++;
          }
         else {
             count+=abs(i-v2[i2].second);
              i2++;
         }
      }
      cout<<count/2;
  }
    
    
   // cerr<<"stfu"<<endl;
    cout << "\n";
}
 
int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}