#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    string s;
    cin>>s;
    map<string,ll> b;
    for(char i='a';i<='z';i++){
    string temp;
    temp.push_back(i);
    b[temp]++;
    for(char j='a';j<='z';j++){
        temp.push_back(j);
        b[temp]++;
        for(char k='a';k<='z';k++){
        temp.push_back(j);
        b[temp]++;
        

    }

    }
    }
    ll ans=0;
    string ans2;
    for(ll i=0;i<n;i++){
        if(b[s[i]]==0) {
            ans=1;
            ans2.push_back(s[i]);
        }
        
    }
    if(ans==1) cout<<ans2;
    else{
        for(ll i=0;i<n-3;i++){
            string temp;
            temp.push_back(a[i]);
             temp.push_back(a[i+1]);
              temp.push_back(a[i+2]);
        if(b[temp]==0) {
            ans=1;
            ans2.push_back(s[i]);
        }
        
    }
    } 
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}