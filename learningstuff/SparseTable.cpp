class SparseTable
{
    ll n;
    vector<vector<ll>> st;
    vector<ll> v;
    vector<ll> lg;
    ll merge(ll a, ll b)
    {
        return gcd(a, b);
    }

public:
    SparseTable(ll n, vector<ll> v)
    {
        this->n = n;
        lg.resize(n + 1);
        this->st.resize(n, vector<ll>(25));
        this->v = v;
        lg[1] = 0;
        for (ll i = 2; i <= n; i++)
            lg[i] = lg[i / 2] + 1;
        for (ll i = 0; i < n; i++)
            st[i][0] = v[i];
        for (ll j = 1; j < 25; j++)
        {
            for (ll i = 0; i < n - (1 << (j - 1)); i++)
                st[i][j] = merge(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
    ll query(ll l, ll r)
    {
        ll j = lg[r - l + 1];
        ll result = merge(st[l][j], st[r - (1 << j) + 1][j]);
        return result;
    }
};