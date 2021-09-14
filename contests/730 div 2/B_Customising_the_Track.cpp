#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++){ cin>>a[i]; sum+=a[i];}
    
    sort(a,a+n);
    if(sum<n){
       cout<<sum*(n-sum);
       
    }
    else{
       ll stuff=sum%n;
       cout<<stuff*(n-stuff);
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