#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,t;
    cin >> n >> t;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll min=1000000004;
    ll count=0;
    for(ll i=0;i<n;i++){
        if(min>=a[i]) min=a[i];
    }
    for(ll i=0;i<n;i++){
        count+=(t/a[i]);
        t-=t/a[i];
        a[i]=a[i]%t;
        cout<<count<<" ";
    }
    cout<<endl<<count;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}