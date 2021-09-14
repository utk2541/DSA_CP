#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    vector<pair<ll, ll>> a(n, {0, 0});
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        a[i].first = t;
        a[i].second = i;
    }
    vector<pair<ll, ll>> v1, v2;

    for (ll i = 0; i < n; i++)
    {
        if (a[i].first % 2 == 0)
            v1.push_back(a[i]);
        else
            v2.push_back(a[i]);
        // cerr<<a[i].first<<endl;
    }

    if (!(v1.size() == n / 2 || v2.size() == n / 2))
        cout << -1;
    else if (n == 1)
    {
        cout << 0;
    }

    else
    {
        if (n % 2 == 0)
        {
            ll count1 = 0;
            ll i1 = 0, i2 = 0;
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    count1 += abs(i - v1[i1].second);
                    i1++;
                }
                else
                {
                    count1 += abs(i - v2[i2].second);
                    i2++;
                }
            }
            ll count2 = 0;
            i1 = 0;
            i2 = 0;
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 != 0)
                {
                    count2 += abs(i - v1[i1].second);
                    i1++;
                }
                else
                {
                    count2 += abs(i - v2[i2].second);
                    i2++;
                }
            }

            cout << min(count1/2, count2/2);
          
        }
        else
        {
            ll count = 0;
            ll i1 = 0, i2 = 0;
            if (v1.size() > v2.size())
            {
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                    {
                        count += abs(i - v1[i1].second);
                        i1++;
                    }
                    else
                    {
                        count += abs(i - v2[i2].second);
                        i2++;
                    }
                }
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    if (i % 2 != 0)
                    {
                        count += abs(i - v1[i1].second);
                        i1++;
                    }
                    else
                    {
                        count += abs(i - v2[i2].second);
                        i2++;
                    }
                }
            }
            cout << count/2;
        }
    }

    // cerr<<"stfu"<<endl;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}