#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    


    
    map<long long,long long> c;
    map<long long,long long>::iterator itr;

   
    
  
    for(long long i=0;i<n;i++){
        c[a[i]]=0;
    }
    
    for(long long i=0;i<n;i++){
        c[a[i]]+=a[i];
    }
    
    
   
    
    
    long long max=0,pos=0;
   for(itr = c.begin();itr != c.end();itr++){
       if(max < (itr->second)) { pos=itr->first; max=itr->second;   }
   }
    cout<<max/pos<<endl;
    for(long long i=0;i<n;i++){
        if(pos==a[i]) cout<<i+1<<" ";
    }
 
 
 
    return 0;
}