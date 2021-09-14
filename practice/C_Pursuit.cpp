#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
void solveCase()
{
    ll n = 0;
    cin >> n;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<ll>());
    ll suma=0,sumb=0;
    vector<ll> sa(n),sb(n);
    for(ll i=0;i<n;i++){
        suma+=a[i];
        sa[i]=suma;
       

    }
    for(ll i=n-1;i>=0;i--){
        sumb+=b[i];
        sb[i]=sumb;
    }
    ll s1=sa[n-1]-((n>=4)?sa[ n/4-1] : 0);
    ll s2=sb[0]-((n>=4)?sb[(n- n/4)] : 0);
 
    if(s1>=s2) cout<<0;
    
    else{
        while(s1<s2){
          //  cerr<<s1<<" "<<s2<<endl;
            sa.push_back(sa[sa.size()-1]+100);
            sb.push_back(0);
            s1=sa[sa.size()-1]-(((sa.size()/4)>=1)?sa[ sa.size()/4-1] : 0);
           s2=sb[0]-(((sb.size())>=4 )?sb[ (sb.size()-(sb.size())/4)] : 0);
           
           
        }
     //    cerr<<s1<<" "<<s2<<endl;
        cout<<sa.size()-n;
    } 
    cout << "\n";
  //  cerr<<"//////////"<<endl;
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}