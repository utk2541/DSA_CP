#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        vector<char> v={'F','L','A','M','E','S'};
        vector<char> a,b;
        string c,d;
        cin>>c;
        cin>>d;
        for(int i=0;c[i]!='\0';i++){a.push_back(c[i]); }
        for(int i=0;d[i]!='\0';i++){b.push_back(d[i]); }
        int count1=0,count2=0,count3=0;
       
        for(auto i=a.begin();i<a.end();i++){
            
            for(auto j=b.begin();j<b.end();j++) {
                if(*i==*j) { a.erase(i); b.erase(j);i--; break;  }

                
            }
            
        }
      
        
        int sum=a.size()+b.size();
      
        
        int n=6;
        while(v.size()!=1 && sum>0){
            
            
            vector<char>::iterator it=v.begin();
            if(sum%n!=0){
            it+=(sum%n)-1;}
            else it+=n-1;
            
            v.erase(it);
           
         

            n--;
        }
     
        if(sum>0)
        cout<<v[0]<<endl;
        else cout<<-1<<endl;
    
        


    }



    
}