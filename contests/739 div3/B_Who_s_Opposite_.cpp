#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{


    ll a,b,c;
    cin>>a>>b>>c;
    ll dist= abs(a-b);
    if(a<=dist*2 && b<=dist*2 && c<=dist*2){
   if((c+dist <=2*dist && c+dist >=1 )&&((c+dist)!=a && (c+dist)!=b) ) cout<<c+dist;
   else if((c-dist <=2*dist && c-dist >=1 ) &&((c+dist)!=a && (c+dist)!=b) ) cout<<c-dist;}
   else cout<<-1;
    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}