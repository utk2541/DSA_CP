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
    ll num1=1,num2=1;
    map<ll,ll> b;
    for(ll i=0;i<n;i++) b[a[i]]++;
    sort(a,a+n);
    num2=a[n-1];
    num1=a[n-2];
    for(ll i=n-3;i>=0;i--){
        if(num1%a[i]!=0 && num2%a[i]!=0){
            num1=a[i];
        }
    }
    ll num3=0;
    if(num1==num2){
        for(auto i=b.begin();i!=b.end();i++){
            if(i->second==2 && i->first>=num3){
                num3=i->first;
            }
        }
        num1=num3;
    }
    cout<<num1<<" "<<num2;
 
    cout << "\n";
}
 
int32_t main()
{
    
        solveCase();
}