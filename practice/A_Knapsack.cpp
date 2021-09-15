#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    
    ll n ,w;
    cin >> n >>w;
    vector<pair<ll,ll>> a(n);
    for(ll i=0;i<n;i++){
        ll a1,a2;
        cin>>a1;
        a[i].first=a1;
        a[i].second=i;
    }
    sort(a.begin(),(a.end()));
    vector<ll> ans;
    ll sum=0;
    ll sum2=0;
    for(ll i=n-1;i>=0;i--){
       // cerr<<a[i].first<<" ";
       if(a[i].first<=w){
        sum+=a[i].first;
        ans.push_back(a[i].second);
        if(sum>w/2){  break;  }
        }
    }
   // cerr<<endl<<ans.size()<<endl;
    if(ans.empty() || sum< (w/2 + ((w%2!=0))) ) cout<<-1;
    else {
        
        cout<<ans.size()<<endl;
        for(auto i : ans) cout<<i+1<<" ";
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