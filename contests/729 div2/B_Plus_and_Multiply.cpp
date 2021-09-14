#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll k=0;
    while(n>0){
        if(n%a==0){
            k=1;
            cerr<<n<<" "<<"1"<<endl;
            break;
        }
        if(n%b==1){
            k=1;
             cerr<<n<<" "<<"2"<<endl;
            break;
        }
        n-=b;
    }
    if(k==1) cout<<"Yes";
    else cout<<"No";
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}