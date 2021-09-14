#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{   ll a,b;
    ll w;
    cin >> a>>b>>w;
    w=w*1000;
    if(w%a>(b-a)*(w/a)){
        cout<<"UNSATISFIABLE";
    }
    else{
        if(w%b==0){
            cout<<w/b<<" "<<w/a;
        }
        else cout<<w/b+1<<" "<<w/a;
    }
    
    
    cout << "\n";
}

int32_t main()
{
   
        solveCase();
}