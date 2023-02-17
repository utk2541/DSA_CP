struct SegTreeItem
{
    ll val;
    SegTreeItem()
    {
        this->val = 0;
    }
    SegTreeItem(ll val)
    {
        this->val = val;
    }
};
class PersistentSegTree
{
 
    struct Vertex
    {
        SegTreeItem item;
        Vertex *l, *r;
        Vertex()
        {
            this->item = SegTreeItem();
            this->l = nullptr;
            this->r = nullptr;
        }
        Vertex(SegTreeItem val)
        {
            this->item = val;
            this->l = nullptr;
            this->r = nullptr;
        }
 
        Vertex(Vertex *l, Vertex *r, SegTreeItem val)
        {
            this->l = l;
            this->r = r;
            this->item = val;
        }
    };
 
    ll n;
    SegTreeItem null;
    vector<Vertex *> roots;
 
    SegTreeItem merge(SegTreeItem l, SegTreeItem r)
    {
 
        return SegTreeItem(l.val + r.val);
    }
 
    void pointupdate(Vertex *v, ll l, ll r, SegTreeItem val, ll i)
    {
 
        if (i >= r || i < l)
            return;
        if (i == l && i == r - 1)
        {
            v->item = val;
            return;
        }
        ll mid = (l + r) / 2;
        if (i < mid)
        {
            Vertex *V;
            if (v->l)
                V = new Vertex(v->l->l, v->l->r, v->l->item);
            else
                V = new Vertex();
            v->l = V;
            pointupdate(v->l, l, mid, val, i);
        }
        else
        {
 
            Vertex *V;
            if (v->r)
                V = new Vertex(v->r->l, v->r->r, v->r->item);
            else
                V = new Vertex();
            v->r = V;
            pointupdate(v->r, mid, r, val, i);
        }
        if (v->l)
        {
            v->item = v->l->item;
        }
        if (v->r)
        {
            v->item = v->r->item;
        }
        if (v->l && v->r)
        {
            v->item = merge(v->l->item, v->r->item);
        }
    }
 
    Vertex *pointUpdateNew(Vertex *v, ll l, ll r, SegTreeItem val, ll i)
    {
 
        if (l == r - 1)
        {
            return new Vertex(val);
        }
        ll mid = (l + r) / 2;
        Vertex *left = v->l;
        Vertex *right = v->r;
        if (i < mid)
        {
            left = pointUpdateNew(v->l, l, mid, val, i);
        }
        else
        {
            right = pointUpdateNew(v->r, mid, r, val, i);
        }
 
        return new Vertex(left, v->r, merge(left->item, right->item));
    }
 
    SegTreeItem query(Vertex *v, ll l, ll r, ll L, ll R)
    {
 
        if (!v)
            return this->null;
 
        if (l >= R || r <= L)
            return this->null;
        if (l == L && r == R)
            return v->item;
        ll mid = (l + r) / 2;
        return merge(query(v->l, l, mid, L, min(R, mid)), query(v->r, mid, r, max(mid, L), R));
    }
 
public:
    SegTreeItem query(ll L, ll R, ll version)
    {
        if (version < roots.size() && version >= 0)
        {
            Vertex *root = roots[version];
            return query(root, 0, n, L, R);
        }
        return SegTreeItem();
    }
    void pointupdate(SegTreeItem val, ll ind, ll version)
    {
        if (version < roots.size() && version >= 0)
        {
            Vertex *root = roots[version];
            pointupdate(root, 0, n, val, ind);
        }
        return;
    }
    void pointUpdateNew(SegTreeItem val, ll ind, ll version)
    {
        if (version < roots.size() && version >= 0)
        {
            Vertex *root = new Vertex(roots[version]->l, roots[version]->r, roots[version]->item);
            roots.push_back(pointUpdateNew(root, 0, n, val, ind));
        }
    }
    void copy(ll version)
    {
        if (version < roots.size() && version >= 0)
        {
            Vertex *root = new Vertex(roots[version]->l, roots[version]->r, roots[version]->item);
 
            roots.push_back(root);
        }
    }
 
    PersistentSegTree(ll n, vector<ll> &a)
    {
        this->n = n;
        this->null = SegTreeItem();
        Vertex *root = new Vertex;
        for (ll i = 0; i < n; i++)
        {
            pointupdate(root, 0, n, SegTreeItem(a[i]), i);
        }
        roots.push_back(root);
    }
    ll get_sz()
    {
        return roots.size();
    }
};