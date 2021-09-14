#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    string a;
    cin>>a;
    if(a.length()>10)
    cout<<a[0]<<a.length()-2<<a[a.length()-1]<<endl;
    else cout<<a<<endl;
    }
    
    return 0;
}
