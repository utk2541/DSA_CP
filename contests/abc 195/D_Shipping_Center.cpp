#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;


void solveCase()
{
    ll n, m, q;
    cin >> n >> m >> q;
    map<ll, ll,greater<ll>> b;
    for (ll i = 0; i < n; i++)
    {
        ll w, v;
        cin >> w >> v;
        b[w] = v;
    }
    ll box[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> box[i];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        vector<ll> abox;
        for (ll i = 0; i < m; i++)
        {
            if (!(i >= l - 1 && i <= r - 1))
                abox.push_back(box[i]);
        }
        if(abox.size()>0){
        ll count=0;
        ll sum=0;
        sort(abox.begin(), abox.end(),greater<ll>());
        for(auto it=b.begin();it!=b.end();it++){
            if(it->first<=abox[count]){
                sum+=it->second;
                count++;
            }
            
        }

        cout<<sum;}
        else cout<<0;
         cout << "\n";
    }

   
}

int32_t main()
{

    solveCase();
}