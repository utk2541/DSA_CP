#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a;
    cin>>a;
    if(a%2==0 && a>2) cout<<"YES";
    else cout<<"NO";
    return 0;
}
