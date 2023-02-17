class dsu
{
public:
    vector<int> maxnum;
    vector<int> minnum;
    vector<int> parent;
    vector<int> size;
    dsu()
    {
        maxnum.resize(1000000);
        minnum.resize(1000000);
        parent.resize(1000000);
        size.resize(1000000);
    }
    int find_set(int v, int MAX, int MIN)
    {
        if (v == parent[v])
        {

            maxnum[v] = MAX;
            minnum[v] = MIN;
            return v;
        }
        if (MAX < v)
            MAX = v;
        if (MIN > v)
            MIN = v;
        return parent[v] = find_set(parent[v], MAX, MIN);
    }
    void make_set(int v)
    {
        parent[v] = v;
        size[v] = 1;
    }

    void union_sets(int a, int b)
    {
        a = find_set(a, a, a);
        b = find_set(b, b, b);
        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
            if (minnum[a] > minnum[b])
                minnum[a] = minnum[b];
            if (maxnum[a] < maxnum[b])
                maxnum[a] = maxnum[b];
        }
    }
};