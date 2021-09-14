#include<bits\stdc++.h>
using namespace std;



int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
long long t,n;
cin>>t;
while(t>0){
    long long sum1=0,sum2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
     if(sum1==sum2){
         sum1+=a[i];
     }  
     else if(sum1>sum2){
         sum2+=a[i];
     }
     else{
         sum1+=a[i];
     }
    }
    if(sum1==sum2)
    cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    
    
   

    t--;
}

    return 0;
}