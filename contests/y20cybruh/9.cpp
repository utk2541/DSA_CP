#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    long long n,x;
    cin>>n;
    cin>>x;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    cin>>t;
    while(t--){
        
        long long d;
        cin>>d;
        long long sum=0;

        for(long long i=0;i<x;i++){
            sum+=a[i];

        }
        int k=0;
      long long sum2=sum;
      long long min=1000000000000000000ll;
      if(sum2>=d && sum2<=min) {min=sum2; k=1;}
        for(long long i=x;i<n;i++){
           sum2-=a[i-x];
            sum2+=a[i];
            if(sum2>=d && sum2<=min) {min=sum2; k=1;}
             

        }
        if(k==0) min=-1;
        cout<<min<<endl;
    }

}