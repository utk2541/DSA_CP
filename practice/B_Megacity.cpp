#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
int32_t mod = 1e9 + 7;
struct cities{
    ll x,y;
    ll k;

};
bool comparecity(struct cities c1,struct cities c2){
    bool ans=false;
    
  if((sqrt(abs(c1.x)*abs(c1.x)+abs(c1.y)*abs(c1.y))<sqrt(abs(c2.x)*abs(c2.x)+abs(c2.y)*abs(c2.y)))  ) ans=true;
    return ans;

}
void solveCase()
{
    ll n ,s;
    cin >> n>>s;
  
  struct cities a[n];
  
    for(ll i=0;i<n;i++){
        cin>>a[i].x>>a[i].y>>a[i].k;
        
    }
    sort(a,a+n,comparecity);
    ll sum=s;
    ll ind=-1;
    for(ll i=0;i<n;i++){
        s+=a[i].k;
      
        if(s>=1000000){
            ind=i;
            break;
        }
        
    }
    
    long double max=-1;
    for(ll i=0;i<=ind;i++){
        if(max<a[i].x*a[i].x+a[i].y*a[i].y) max=sqrt(a[i].x*a[i].x+a[i].y*a[i].y);
        
    }
    if(max==-1) cout<<-1;
    else
    cout<<fixed<<setprecision(7)<<max;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}