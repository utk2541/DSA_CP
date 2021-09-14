#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll k;
    cin>>k;
    ll sum=0;
    for(ll i=5;i<=k;i*=5){
        sum+=(k/i);
    }
    cout<<sum;
    return 0;
}
