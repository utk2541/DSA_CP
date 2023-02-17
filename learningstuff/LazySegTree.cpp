/*
notes:
To update a range, when entering a node, push the update deeper into the tree and recalculate the value,
while exiting the node.
Update is distributive.

*/
struct SegTreeitem
{
    ll val;
};
class LazySegTree
{
    ll n;
    SegTreeitem null;
    vector<SegTreeitem> tree;
    vector<SegTreeitem> Lazy;
    vector<bool> marked;
    void pointupdate(ll ind, ll l, ll r, SegTreeitem val, ll i)
    {
        propagateLazy(ind, l, r);
        if (i < l || i >= r)
            return;
        if (l == i && r - 1 == i)
        {
            tree[ind] = val;
        }
        else
        {
            ll mid = (l + r) / 2;

            pointupdate(2 * ind, l, mid, val, i);

            pointupdate(2 * ind + 1, mid, r, val, i);

            tree[ind] = merge(tree[2 * ind], tree[2 * ind + 1]);
        }
    }
    void rangeUpdate(ll ind, ll l, ll r, ll L, ll R, SegTreeitem val)
    {
        if (l >= r)
            return;

        if (r <= L || l >= R)
            return;

        propagateLazy(ind, l, r);

        if (l == L && r == R)
        {
            Lazy[ind] = val;
            tree[ind].val += val.val;
            marked[ind] = true;
            propagateLazy(ind, l, r);
        }
        else
        {

            ll mid = (l + r) / 2;
            rangeUpdate(2 * ind, l, mid, L, min(R, mid), val);
            rangeUpdate(2 * ind + 1, mid, r, max(L, mid), R, val);
            tree[ind] = merge(tree[2 * ind], tree[2 * ind + 1]);
        }
    }
    void propagateLazy(ll ind, ll l, ll r)
    {
        if (marked[ind])
        {

            if (l < r - 1)
            {

                marked[2 * ind] = marked[2 * ind + 1] = true;
                Lazy[2 * ind].val += Lazy[ind].val;
                Lazy[2 * ind + 1].val += Lazy[ind].val;
                tree[2 * ind].val += Lazy[ind].val;
                tree[2 * ind + 1].val += Lazy[ind].val;
                tree[ind] = merge(tree[2 * ind], tree[2 * ind + 1]);
            }

            Lazy[ind].val = 0;

            marked[ind] = false;
        }
    }
    SegTreeitem query(ll ind, ll l, ll r, ll L, ll R)
    {
        if (L >= r || R <= l)
            return null;

        if (l >= r)
            return this->null;

        ll mid = (l + r) / 2;
        propagateLazy(ind, l, r);

        if (l == L && r == R)
            return tree[ind];
        else
        {
            return merge(query(2 * ind, l, mid, L, min(R, mid)), query(2 * ind + 1, mid, r, max(L, mid), R));
        }
    }
    SegTreeitem merge(SegTreeitem a, SegTreeitem b)
    {
        return {min(a.val, b.val)};
    }

public:
    LazySegTree(ll n)
    {
        this->n = n;
        marked.resize(4 * n + 5);
        marked.assign(4 * n + 5, 0);
        this->null = {INT32_MAX};
        tree.resize(4 * n + 5, this->null);
        Lazy.resize(4 * n + 5, {0});
    }
    SegTreeitem query(ll l, ll r)
    {
        return query(1, 0, n, l, r);
    }
    void pointupdate(SegTreeitem val, ll i)
    {
        pointupdate(1, 0, n, val, i);
    }
    void rangeUpdate(ll L, ll R, SegTreeitem val)
    {
        rangeUpdate(1, 0, n, L, R, val);
    }
};