#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
   ll ax,bx,ay,by,fx,fy;
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>fx>>fy;
    ll path=0;
    
    if((ax==bx && fx==ax && (fy>min(by,ay)&& fy<max(by,ay)) )||(ay==by && fy==ay && (fx>min(bx,ax)&& fx<max(bx,ax)) ))
    path+=2;
    path+=abs(ax-bx)+abs(ay-by);
    cout<<path;

    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}