#include <bits\stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;

        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll sum2 = 0;
        ll count;
        int k = 0;

        for (ll i = 0; i < n; i++)
        {
            sum += i;
            sum2 += a[i];
            if (sum2 < sum)
                k = 1;
        }

        if (k == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}