#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll h,w;
    cin >> h>>w;
    ll k=1;
    ll a[h][w];
    for(ll i=0;i<(h);i++){
        
        for(ll j=0;j<w;j++){
            if((i%2==0) && (j%2==0) && ((i==0 || i==h-1 || j==0 || j==w-1))) a[i][j]=1;
           
            else if((i>0  && j==(w-1))){
                if(a[i-1][j-1]==0 && a[i-1][j]==0 && a[i][j-1]==0 ){
                    a[i][j]=1;
                }
                
                else a[i][j]=0;
            }
            else if(j>0 && i==h-1){
                if(a[i-1][j-1]==0 && a[i-1][j]==0 && a[i][j-1]==0 && a[i-1][j+1]==0 ){
                    a[i][j]=1;
                }
                
                
                else a[i][j]=0;
            }
            else
            {
                a[i][j]=0;
            }
            
            
        }

       
       
    }
    for(ll i=0;i<h;i++){
        for(ll j=0;j<w;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
   
    cout<<endl;
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}