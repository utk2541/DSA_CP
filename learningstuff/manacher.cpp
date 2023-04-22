const auto manacher = [](string s) -> vector<ll>
{
    ll n = s.length();
    s = '^' + s + '$';
    vector<ll> d(n + 2, 0), res(n);

    ll l = 1, r = 1;
    for (ll i = 1; i <= n; i++)
    {
        d[i] = max(0LL, min(r - i, d[l + r - i]));
        while (s[i - d[i]] == s[i + d[i]])
        {
            d[i]++;
        }
        if (i + d[i] > r)
        {
            l = i - d[i], r = i + d[i];
        }
        res[i - 1] = d[i];
    }

    return res;
};