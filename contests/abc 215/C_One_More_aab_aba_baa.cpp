#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s; ll n;
    cin>>s >> n;
    sort(s.begin(),s.end());
    string ans;
    while(n--){
        ans=s;
        next_permutation(s.begin(),s.end());
    }
    cout<<ans;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}