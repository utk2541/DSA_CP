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
    vector<ll> suma,sumb;
    ll m=n;
    sort(a,a+n);
    sort(b,b+n);
    ll sum1=0,sum2=0;

    for(ll i=0;i<n;i++){
        sum1+=a[i];
        sum2+=b[i];
        suma.push_back(sum1);
        sumb.push_back(sum2);
        

    }
    ll maxb=sum2;
    sum1=suma[n-1]-((n/4>0)?suma[n/4-1]:0);
    sum2=sumb[n-1]-((n/4>0)?sumb[n/4-1]:0);
    if(suma[n-1]-((n/4>0)?suma[n/4-1]:0)>=sumb[n-1]-((n/4>0)?sumb[n/4-1]:0)) cout<<0;
    else{
        while(sum1<sum2){
            suma.push_back(suma[n-1]+100);
            sumb.push_back(sumb[n-1]);
            n++;
           
            sum1=suma[n-1]-((n/4>0)?suma[n/4-1]:0);
            if(n-(n/4)<m)
            sum2=sumb[n-1]-((n/4>0)?sumb[n/4-1]:0);
            else sum2=sumb[n-1];
        
        }
        cout<<n-m;
    }
    cout << "\n";
   

}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}