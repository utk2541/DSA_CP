#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    cin>>a;
    ll b=0,c,i=0;
    while(a>0){
        

        c=a%10;
        if(c>4){ c=9-c;
        
        }
        if(a==9) c=9;
        b=b+(c*(ll)ceil(pow(10,i)));
      
        i++;
        
        a=a/10;
    }
    cout<<b;
    return 0;
}
