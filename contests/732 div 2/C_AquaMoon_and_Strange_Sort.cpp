#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;
struct arr{
    ll value;
    ll ind;
};
bool comparr(struct arr a,struct arr b){
    if(a.value<b.value) return true;
    return false;
    
}
void solveCase()
{
    ll n = 0;
    cin >> n;
    struct arr a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i].value;
        a[i].ind=i;
    }
    sort(a,a+n,comparr);
    ll diff=0;
    for(ll i=0;i<n-1;i++){
        if(a[i].value==a[i+1].value && (a[i].ind%2 != i%2 && a[i+1].ind%2 != (i+1)%2 )){
            struct arr temp;
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i++;
        }
        
    }
    string ans= "YES";
    for(ll i=0;i<n;i++){
        if(abs(i-a[i].ind)%2!=0){ ans="NO"; break;}
    }
    cout<<ans;
  
  
  
   
   
  
    
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}