struct TrieNode
{
    vector<TrieNode *> children;
    bool isLeaf;
    TrieNode()
    {
        children.assign(26, NULL);
        isLeaf = 0;
    }
};
class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode;
    }
    void insert(string s)
    {
        TrieNode *pCrawl = root;
        for (auto i : s)
        {
            int u = i - 'a';
            if (!pCrawl->children[u])
                pCrawl->children[u] = new TrieNode;
            pCrawl = pCrawl->children[u];
        }
        pCrawl->isLeaf = 1;
    }
    bool search(string s)
    {
        TrieNode *pCrawl = root;
        for (auto i : s)
        {
            int u = i - 'a';
            if (!pCrawl->children[u])
                return false;
            pCrawl = pCrawl->children[u];
        }
        return true;
    }
};

