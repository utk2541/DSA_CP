#include<iostream>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    cin>>a;
    while(a!=1){
        cout<<a<<" ";
        if(a%2==0) a/=2;
        else a=(a*3)+1;
        

    }
    cout<<1;
    


}