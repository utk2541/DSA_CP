#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin>>s;
    string ans="Yes";
    for(ll i=0;i<s.length();i++){
        if(i%2==0 &&  !(s[i]<='z' && s[i]>='a' )) ans="No";
        if(i%2!=0 &&  !(s[i]<='Z' && s[i]>='A' )) ans="No";
    }
    cout<<ans;
    cout << "\n";
}

int32_t main()
{
 
        solveCase();
}