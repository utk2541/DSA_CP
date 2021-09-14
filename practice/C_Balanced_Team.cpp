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
    for(ll i=0;i<n;i++) cin>>a[i];
   
    sort(a,a+n);
    ll team=0;
   
    ll end=0;
    for(ll i=0;i<n;i++){
        while(a[end]-a[i]<=5 && end<n){
            end++;
            if(team<end-i) team=end-i;          
        }
        
    }

    cout<<team;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}