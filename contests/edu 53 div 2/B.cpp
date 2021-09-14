#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll a1[n], b[n];
    stack<ll> a;
    map<ll,ll> c;
    
    for(ll i=0;i<n;i++){cin>>a1[i];}
    for(ll i=n-1;i>=0;i--){a.push(a1[i]); c[a1[i]]=1;}
    
    ll k,count=0;
    for(ll i=0;i<n;i++)cin>>b[i];
    for(ll i=0;i<n;i++){
         count=0;
        if(c[b[i]]==1){
            k=0;
           
            while(k==0){
                
                
                if(a.top()==b[i])
                    k=1;
                c[a.top()]=0;
                a.pop();
                count++;


                
            }

        }
        cout<<count<<" ";
    }

    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solveCase();
}