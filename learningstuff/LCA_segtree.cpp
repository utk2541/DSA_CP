#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

class LCA
{

    vector<ll> height, order, first;
    vector<ll> segtree;
    vector<vector<ll>> tree;
    vector<bool> visited;
    ll n;
    void dfs(ll v, ll p, ll h)
    {
        height[v] = h;
        order.push_back(v);
        for (auto u : tree[v])
        {
            if (u != p)
            {
                dfs(u, v, h + 1);
                order.push_back(v);
            }
        }
    }
    int merge(ll a, ll b)
    {
        if (a == -1)
            return b;
        if (b == -1)
            return a;

        return (height[segtree[a]] < height[segtree[b]]) ? segtree[a] : segtree[b];
    }
    void build(ll v, ll l, ll r)
    {
        if (l == r)
        {
            segtree[v] = l;
            return;
        }
        ll mid = (l + r) / 2;
        build(2 * v, l, mid);
        build(2 * v + 1, mid + 1, r);
        segtree[v] = merge(segtree[2 * v], segtree[2 * v + 1]);
    }
    int query(ll v, ll l, ll r, ll L, ll R)
    {
        if (L > R)
            return -1;
        if (l == L && r == R)
        {
            return segtree[v];
        }
        else
        {
            ll mid = (l + r) / 2;
            return merge(query(2 * v, l, mid, L, min(R, mid)), query(2 * v + 1, mid + 1, r, max(L, mid + 1), R));
        }
    }

public:
    LCA(ll n, vector<vector<ll>> &tree, ll root = 0)
    {
        segtree.resize(4 * n);
        first.resize(n);
        height.resize(n);
        this->n = n;
        (this->tree) = tree;
        dfs(root, -1, 0);
        build(1, 0, n - 1);
    }
    int lca(ll u, ll v)
    {
        ll i = first[u], j = first[v];
        if (i > j)
            swap(i, j);

        return query(1, 0, n - 1, i, j);
    }
};

int32_t main()
{
}