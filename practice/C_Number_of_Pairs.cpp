#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
  ll n,l,r;
  cin>>n>>l>>r;
  ll a[n];
  ll count=0;
  for(ll i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);

  for(ll i=0;i<n;i++){
      ll l1= lower_bound(a,a+n,l-a[i])-a;
      ll r1 =upper_bound(a,a+n,r-a[i])-a;



        count+=r1-l1;
        if(l<= 2*a[i] && 2*a[i]<=r) count--;
    
  }
    cout<<count/2;
    cout << "\n";
 
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}