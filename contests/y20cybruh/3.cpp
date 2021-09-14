#include<bits\stdc++.h>
using namespace std;
int main(){
    long long a[3];
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++) cin>>a[i];
 
        long long count=0;
        if(a[1]>a[2]){
        while(a[0]>0 && a[1]>1){
            count+=3;
            a[0]--;
            a[1]-=2;
        }
        while(a[1]>0 && a[2]>1){
            count+=3;
            a[1]--;
            a[2]-=2;
        }}
        else if(a[1]<a[2]){
             
        
        while(a[1]>0 && a[2]>1){
            count+=3;
            a[1]--;
            a[2]-=2;
        }
        while(a[0]>0 && a[1]>1){
            count+=3;
            a[0]--;
            a[1]-=2;
        }
        }
        if(a[1]==a[2]){
            if(a[0]<=a[1]/2){
                 while(a[0]>0 && a[1]>1){
            count+=3;
            a[0]--;
            a[1]-=2;
        }
        while(a[1]>0 && a[2]>1){
            count+=3;
            a[1]--;
            a[2]-=2;
        

            }
       
            } 
        else {
              while(a[1]>0 && a[2]>1){
            count+=3;
            a[1]--;
            a[2]-=2;
        }
        while(a[0]>0 && a[1]>1){
            count+=3;
            a[0]--;
            a[1]-=2;
        }
        } }
        cout<<count<<endl;
    }
    return 0;
}