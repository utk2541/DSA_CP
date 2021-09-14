#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll count=0;
   
    while(n>9){

        if(n%10==0){ n++; count++;}
        
        else{
        count+=10-n%10;
        n+=10-n%10;}
        
        while(n%10==0){
            n=n/10;
        }
       

    }
    if(n>=1 && n<=9) count+=9;
    cout<<count;
    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}