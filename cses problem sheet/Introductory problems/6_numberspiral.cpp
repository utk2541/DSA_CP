#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,r,c;
    cin>>t;
    while(t--){
        cin>>r>>c;
        ll M=max(r,c);
        ll num;
        if(M%2==0){
            if(M!=r)
                num=(c-1)*(c-1)+r;
                
            else 
                num=r*r-c+1;
                

            
        }
        else{
              if(M!=c)
                num=(r-1)*(r-1)+c;
                
            else 
                num=c*c-r+1;
                
        }
        cout<<num<<endl;
        


        

    }
   

    return 0;
}
