#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a[n],b[n],c[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++) cin>>c[i];
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
     ll count=0;
    if(n==1){
        if(a[0]<b[0] && b[0]<c[0]) cout<<1;
        else cout<<0;
    }
   else{
        for(ll i=0;i<n-1;i++){
            if(a[i]<b[i]){
                if(c[i]>b[i]) count++;
                else{
                    ll j=-1;
                    j=upper_bound(c+i,c+n,b[i])-c;
                    if(j!=n){
                        ll temp;
                        temp=c[j];
                        c[j]=c[i];
                        c[i]=temp;
                        count++;

                    }

                }
            }
            else{
                ll k=-1;
                k=upper_bound(b+i,b+n,a[i])-b;
                if(k!=n){
                    ll temp1;
                        temp1=b[k];
                        b[k]=b[i];
                        b[i]=temp1;
                if(c[i]>b[i]) count++;
                else{
                    ll j=-1;
                    j=upper_bound(c+i,c+n,b[i])-c;
                    if(j!=n){
                        ll temp;
                        temp=c[j];
                        c[j]=c[i];
                        c[i]=temp;
                        count++;

                    }
                    else{
                          temp1=b[k];
                        b[k]=b[i];
                        b[i]=temp1;
                    }

                }
                }

            }
        }
        if(a[n-1]<b[n-1]&& b[n-1]<c[n-1]) count++;
        cout<<count;
    }
  
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}