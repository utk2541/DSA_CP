struct SegTreeitem
{
    ll val;
};
class SegTree
{
    ll n;
    SegTreeitem null ;
    vector<SegTreeitem> tree;

    void pointupdate(ll ind, ll l, ll r, SegTreeitem val, ll i)
    {
        if (l == r)
        {
            tree[ind] = val;
        }
        else
        {
            ll mid = (l + r) / 2;
            if (i <= mid)
            {
                pointupdate(2 * ind, l, mid, val, i);
            }
            else
            {
                pointupdate(2 * ind + 1, mid + 1, r, val, i);
            }
            tree[ind] = merge(tree[2 * ind], tree[2 * ind + 1]);
        }
    }
    SegTreeitem query(ll ind, ll l, ll r, ll L, ll R)
    {

        ll mid = (l + r) / 2;
        if (L > R)
            return this->null;
        if (l == L && r == R)
        {
            return tree[ind];
        }
        else
        {
            return merge(query(2 * ind, l, mid, L, min(mid, R)), query(2 * ind + 1, mid + 1, r, max(mid + 1, L), R));
        }
    }
    SegTreeitem merge(SegTreeitem a, SegTreeitem b)
    {
        return {a.val^b.val};
    }
    public:
    SegTree(ll n){
        this->n=n;
        tree.resize(4 * n);
        this->null={0};
    }
    SegTreeitem query(ll l,ll r){
        return query(1, 1, n, l, r);
    }
    void pointupdate(SegTreeitem val, ll i)
    {
        pointupdate(1, 1, n, val, i);
    }
};