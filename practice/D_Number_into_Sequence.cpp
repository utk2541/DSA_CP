#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

vector<ll>  SieveOfEratosthenes(ll n) //courtesy gfg
{
    vector<ll> primes;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++)
    {
      
        if (prime[p] == true)
        {
          
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    
    for (ll p = 2; p <= n; p++)
        if (prime[p]) primes.push_back(p);

     return primes;     
}
void solveCase()
{
    ll n = 0;
    cin >> n;
    vector<ll> c;
    map<ll,ll> b;
   c=  SieveOfEratosthenes(sqrt(n));
    
    ll n1=n;
    vector<ll> ans;
    for(auto i : c){
        ll count=0;
        n1=n;
        while(n1%(i*i)==0){
            count++;
            n1/=i;
        }
        b[i]=count;
    }
    if(!b.empty()){
    ll max=0,mn=b.begin()->first;
    for(auto i : b){
        if(i.second> max) {
            mn=i.first;
            max=i.second;
        } 
    }
    while(n%(mn*mn)==0){
          ans.push_back(mn);
            n/=mn;
        }
    }
    ans.push_back(n);
    cout<<ans.size()<<endl;
    for(auto i : ans) cout<<i<<" ";
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}