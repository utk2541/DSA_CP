#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n, sx,sy,ex,ey;
    cin >> n >> sx >> sy >>ex >>ey;
    string s;
    cin>>s;
    ll k=0;
    

    for(ll i=0;i<s.length();i++){
        if(sx==ex && sy==ey) break;
        if(s[i]=='N'){
            if(ey-sy>0 ) {
                
                sy++;

        }}
        if(s[i]=='W'){
            if(ex-sx<0 ) {
                
                sx--;

        }}
        if(s[i]=='S'){
            if(ey-sy<0 ) {
                
                sy--;

        }}
        if(s[i]=='E'){
            if(ex-sx>0 ) {
                
                sx++;

        }}

        k++;
    }
    if(ex!=sx || ey!=sy) k=-1;
    cout<<k;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}