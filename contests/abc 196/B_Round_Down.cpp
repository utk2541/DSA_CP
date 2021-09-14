#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
string roundstring(string s){
    ll count=0;
    for(auto i : s){
        if(i=='.') {
            break;
        }
        count++;
    }
    string s1;
    for(ll i=0;i<count;i++) s1.push_back(s[i]);
    return s1;
}
void solveCase()
{
    string n;
    cin >> n;
    cout<<roundstring(n);

    cout << "\n";
}

int32_t main()
{
 
        solveCase();
}