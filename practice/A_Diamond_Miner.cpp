#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;



int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 0;
    cin >> t;
    while (t--)
     {
          ll n = 0;
    cin >> n;
    ll miner[n],diamond[n];
    ll x,y;
    for(ll i=0,j=0,k=0;i<2*n;i++){
        cin>>x>>y;
        if(x==0){ miner[j]=abs(y); j++;}
        else{ diamond[k]=abs(x); k++; }
    }
    sort(miner,miner+n);
    sort(diamond,diamond+n);
    double en=0;
    for(ll i=0;i<n;i++){
        en+=sqrt(1.0*diamond[i]*diamond[i]+1.0*miner[i]*miner[i]);
    }
    printf("%.15lf\n",en);
     }
}