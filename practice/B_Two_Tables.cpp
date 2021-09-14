#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll w,h;
    cin >> w>>h;
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    ll w1,h1;
    cin>>w1>>h1;
    if(abs(x2-x1)+w1 > w && abs(y2-y1)+h1 > h) cout<<-1;
    else{
        if(abs(x2-x1)+w1 > w) {
            if((h-max(y2,y1) >=h1)|| (min(y2,y1) >=h1)) cout<<0;
            else{
                cout<<min(h1-(h-max(y2,y1)),h1-min(y2,y1));
            }
            
        }
        else if(abs(y2-y1)+h1 > h) {
            if((w-max(x2,x1) >=w1)|| (min(x2,x1) >=w1)) cout<<0;
            else{
                cout<<min(w1-(w-max(x2,x1)),w1-min(x2,x1));
            }
            
        }
      else {
          if((h-max(y2,y1) >=h1)|| (min(y2,y1) >=h1) || (w-max(x2,x1) >=w1)|| (min(x2,x1) >=w1)) cout<<0;
          else cout<<min(min(h1-(h-max(y2,y1)),h1-min(y2,y1)),min(w1-(w-max(x2,x1)),w1-min(x2,x1)));
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