#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b,c;
    cin >> a>>b>>c;
    ll d1=b-a,d2=c-b;
    if(d2>d1){
        if((d2-d1)%2==0) cout<<(d2-d1)/2;
        else{
       cout<<1+(d2+1-d1)/2;
            
        }
    }
    else if(d2==d1) cout<<0;
    else{
         cout<<(d1-d2);
     
    }

    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}