#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0,l,r;
    cin >> n>>l>>r;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll i=0,j=n-1;
    ll count=0;
    ll i1=i,j1=j;
    ll num=0;
    while(i<j && j<n && i>-1){
        if(a[i]+a[j]<l) {
            i1=i;
            i++;
            
        }
        else if(a[i]+a[j]>r){
            
            j--;
            i=i1;
            
        }

        else{
            count++;
            i++;
            
          
            if(i==j){
                j--;
                i=i1+1;
            }
        }
        
    }
    cout<<count;
   


    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}