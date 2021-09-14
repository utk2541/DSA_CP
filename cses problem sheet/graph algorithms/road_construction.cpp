#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
class dsu
{
public:
    ll count;
    ll maxsize;
    ll parent[1000000];
    ll sizepepeg[1000000];
    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    void make_set(int v)
    {
        parent[v] = v;
        sizepepeg[v] = 1;
    }
    dsu(int n)
    {
        count = n;
        maxsize = 1;
    }
    void union_sets(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (sizepepeg[a] < sizepepeg[b])
                swap(a, b);
            parent[b] = a;
            sizepepeg[a] += sizepepeg[b];
            if (sizepepeg[a] >= maxsize)
                maxsize = sizepepeg[a];
            count -= 1;
        }
    }
};
void solveCase()
{
    ll n, m, c, d;

    ll count = 0;
    cin >> n >> m;
    dsu s(n);
    for (ll i = 1; i <= n; i++)
        s.make_set(i);
    for (ll i = 0; i < m; i++)
    {
        cin >> c >> d;
        s.union_sets(c, d);

        cout << s.count << " " << s.maxsize << '\n';
    }

    cout << "\n";
}

int32_t main()
{
    solveCase();
}