#include <bits\stdc++.h>


using namespace std;
int main(){
    int test;
    cin>>test;
    long long a;
    
    while(test--){
        int t=0;
        cin>>a;
        for(int i=3;i<=sqrt(a);i+=2){
            if(a%i==0){
                t=1;
                break;
            }
        }
        if(a%2!=0) t=1;
        if(t==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }


    return  0;
}