#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin >> a>>b;
    ll n1=a*b*3,n2=a,n3=n1-a;
    if(b>1){
    cout<<"YES"<<endl;
    cout<<n3<<" "<<n2<<" "<<n1;
    cout << "\n"; }
    else{
        cout<<"NO"<<endl;
    }

}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}