#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll k;
    cin>>k;
    vector<ll> a,b;
    ll sum1=k,sum2=0;
    a.push_back(k);
    for(ll i =k-1;i>0;i--){
        if(sum1>sum2){
            b.push_back(i);
            sum2+=i;
        }
        else{
            a.push_back(i);
            sum1+=i;
        }
  
        
        


    }
          if(sum1==sum2){
            cout<<"YES"<<endl;
            cout<<a.size()<<'\n';
            for(ll i=0;i<a.size();i++){
                cout<<a[i]<<" ";

            }
            cout<<endl<<b.size()<<endl;
             for(ll i=0;i<b.size();i++){
                cout<<b[i]<<" ";

            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;

    
    return 0;
}
