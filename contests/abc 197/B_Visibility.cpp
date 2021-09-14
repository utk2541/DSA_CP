#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll h,w,x,y;
    cin >> h>>w>>x>>y;
    string s[h];
    for(ll i=0;i<h;i++) cin>>s[i];
    x--;
    y--;
     ll count=0;
    for(ll i=y-1;i>=0;i--){
        if(s[x][i]=='#')
            break;
        count++;
    }
    for(ll i=y+1;i<w;i++){
        if(s[x][i]=='#')
            break;
        count++;
    }
    for(ll i=x-1;i>=0;i--){
        if(s[i][y]=='#')
            break;
        count++;
    }
    for(ll i=x+1;i<h;i++){
        if(s[i][y]=='#')
            break;
        count++;
    }
    if(s[x][y]=='.') count++;
    cout<<count;


    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}