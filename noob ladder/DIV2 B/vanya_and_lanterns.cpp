#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,l;
    cin >> n>>l;
    double a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    double b=0;
   
   
    for(ll i=1;i<n;i++){
        if(a[i]-a[i-1]>b){
            b=a[i]-a[i-1];
        }
    }
    double k=max(a[0],l-a[n-1]);
    
 
    k=max((double)k,(double)b/(double)2);
    printf("%.10f\n",k);

        
        
    
    
    cout << "\n";
}

int32_t main()
{
   solveCase();
}