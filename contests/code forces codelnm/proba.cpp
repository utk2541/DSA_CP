#include<bits\stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t,n,k,count=0;
cin>>t;
while(t>0){
   count=0;
   cin>>n;
   k=n/2;
   while(k>=2 && n>2){
       if(n%k==0){
          
           count++;
           n=n/k;
           k=n/2;
       }
       else
       {
           k--;
       }
       
       
       
   }
    
    if(count%2==0) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;


    t--;
}

    return 0;
}