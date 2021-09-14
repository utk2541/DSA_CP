#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    ll n=a.length();
    ll count = 1;
    ll max = 1;
    for (ll i = 1; i < n ; i++)
    {
       
        if (a[i] == a[i - 1])
            count++;
        else
            count = 1;
         if (count >= max)
        {
            max = count;
        }
    }
    cout << max;
    return 0;
}
