#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
 
void solveCase()
{
    double r,x,y;
    cin >> r>>x>>y;
    double d=x*x+y*y;
 
    
    if(r*r>d) cout<<2;
    else cout<<(ceil(sqrtl(d)/r));
 
    cout << "\n";
}
 
int32_t main()
{
    
        solveCase();
        return 0;
}