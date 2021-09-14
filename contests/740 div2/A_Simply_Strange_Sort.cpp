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
    for(ll i=0;i<n;i++) cin>>a[i];
    ll k=0;
    ll it=1;
    while(k==0){
         ll f=0;
        for(ll i=0;i<n-1;i++) if(a[i]>a[i+1]) f=1;
        if(f==0){k=1; break;}
        if(it%2!=0){
            for(ll i=0;i<n-2;i+=2){
                if(a[i]>a[i+1]){
                    ll temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        else{
            for(ll i=1;i<n-1;i+=2){
                if(a[i]>a[i+1]){
                    ll temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        it++;
       

    }
    cout<<it-1;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}