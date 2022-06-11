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
        if (i < l || i > r)
            return;
        if (l == i && r == i)
        {
            tree[ind] = val;
        }
        else
        {
            ll mid = (l + r) / 2;

            pointupdate(2 * ind, l, mid, val, i);

            pointupdate(2 * ind + 1, mid + 1, r, val, i);

            tree[ind] = merge(tree[2 * ind], tree[2 * ind + 1]);
        }
    }
    void rangeUpdate(ll ind, ll l, ll r, ll L, ll R, SegTreeitem val)
    {

        propagateLazy(ind, l, r);
        if (r < L || l > R)
            return;

        if (l >= L && r <= R)
        {
            Lazy[ind] = val;

            marked[ind] = true;
            propagateLazy(ind, l, r);
        }
        else
        {

            ll mid = (l + r) / 2;
            rangeUpdate(2 * ind, l, mid, L, R, val);
            rangeUpdate(2 * ind + 1, mid + 1, r, L, R, val);
            tree[ind] = merge(tree[2 * ind], tree[2 * ind + 1]);
        }
    }
    void propagateLazy(ll ind, ll l, ll r)
    {
        if (marked[ind])
        {

            if (l < r)
            {

                marked[2 * ind] = marked[2 * ind + 1] = true;
                Lazy[2 * ind] = Lazy[ind];
                Lazy[2 * ind+1] = Lazy[ind];
            }
            tree[ind].val = (r - l + 1) * Lazy[ind].val;
            Lazy[ind].val = 0;
            marked[ind] = false;
        }
    }
    SegTreeitem query(ll ind, ll l, ll r, ll L, ll R)
    {

        ll mid = (l + r) / 2;
        propagateLazy(ind, l, r);

        if (r <L || l > R || l>r)
        {

            return this->null;
        }

        if (l >= L && r <= R)
        {

            return tree[ind];
        }
        else
        {

            return merge(query(2 * ind, l, mid, L, R), query(2 * ind + 1, mid +1, r, L, R));
        }
    }
    SegTreeitem merge(SegTreeitem a, SegTreeitem b)
    {
        return {a.val + b.val};
    }

public:
    LazySegTree(ll n)
    {
        this->n = n;
        tree.resize(4 * n + 10);
        Lazy.resize(4 * n + 10);
        marked.resize(4 * n + 10);
        marked.assign(4 * n + 10, 0);
        this->null = {0};
    }
    SegTreeitem query(ll l, ll r)
    {
        return query(1, 1, n, l, r);
    }
    void pointupdate(SegTreeitem val, ll i)
    {
        pointupdate(1, 1, n, val, i);
    }
    void rangeUpdate(ll L, ll R, SegTreeitem val)
    {
        rangeUpdate(1, 1, n, L, R, val);
    }
};
