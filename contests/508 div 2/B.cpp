#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    if(((n*n+n)/2)%2!=0) cout<<"No";
    else{
        cout<<"Yes"<<endl;
        if( n%2==0){
            cout<<1<<" "<<n-1<<endl;
            cout<<n<<" ";
            for(ll i=1;i<=n;i++)cout<<i<<" ";
        }
        if(n%2!=0){
            cout<<1<<" "<<n-1<<endl;
            cout<<2<<" ";
            for(ll i=1;i<=n;i++){if(i!=2) cout<<i<<" ";}
            
        }
        
    }
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}