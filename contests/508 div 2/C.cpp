#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n;
    cin >> n;
    ll a1[n], b1[n];
    vector<ll> a, b;
    ll k;
    for (ll i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b1[i];
    }
    for (ll i = 0; i < n; i++)
    {
        a.push_back(a1[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        b.push_back(b1[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll A = 0, B = 0;
    ll count = 0;
    while (a.size() != 0 || b.size() != 0)
    {

        if (count % 2 == 0)
        {
            if (a.size() == 0)
                b.pop_back();
            else if(b.size()==0){
                A += a[a.size() - 1];
                    a.pop_back();
            }

            else
            {
                if (b[b.size() - 1] <= a[a.size() - 1])
                {
                    A += a[a.size() - 1];
                    a.pop_back();
                }
                else
                {
                    b.pop_back();
                }
            }
        }
        else
        {
            if (b.size() == 0)
                a.pop_back();
            else if(a.size()==0){
                B += b[b.size() - 1];
                    b.pop_back();
            }
            else
            {
                if (a[a.size() - 1] <= b[b.size() - 1])
                {
                    B += b[b.size() - 1];
                    b.pop_back();
                }
                else
                {
                    a.pop_back();
                }
            }
        }
        count++;
    }
    cout << A - B;

    cout << "\n";
}

int32_t main()
{
    solveCase();
}