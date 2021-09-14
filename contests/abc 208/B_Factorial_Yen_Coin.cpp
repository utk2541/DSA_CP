#include <iostream>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ;
  
    cin >> n;
     
    ll coins[11];
    ll fact=1;
     
    for(ll i=1;i<=10;i++){
        fact*=i;
        coins[i]=fact;
    }
    ll num=0;
 
    for(ll i=10;i>0;i--){
        num+=n/coins[i];
        n=n%coins[i];

    }
    cout<<num;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}