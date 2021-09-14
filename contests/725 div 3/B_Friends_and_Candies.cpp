#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0,sum=0;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){cin>>a[i]; sum+=a[i]; }
    sort(a,a+n);
    ll pdiff=0,ndiff=0;
    ll diff[n];
    for(ll i=0;i<n;i++){
        if(a[i]-(sum/n)<0) {
            ndiff+=abs(a[i]-(sum/n));
        } 
        else{
            pdiff+=abs(a[i]-(sum/n));
        }
        diff[i]=a[i]-(sum/n);
    }
    if(pdiff==ndiff && pdiff==0){
        cout<<0;
    }
    else{
        if(pdiff!=ndiff){
            cout<<-1;
        }
        else{
        ll count=0,countpos=0;
        for(ll i=n-1;i>=1;i--){
            if(diff[i]>0 ){
                countpos+=diff[i];
                count++;
            }
        }
        cout<<count;}
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