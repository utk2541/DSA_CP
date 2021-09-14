#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n;
    cin>>q;
    string w;
    
    cin>>w;
    //unordered_map<char,int> m1;
   
   // for(int i=0;w[i]!='\0';i++) { m1[w[i]]=0; }
   
    while(q--){
        int l ,r;
        cin>>l;
        cin>>r;
        unordered_map<char,int> m;
        
        
        
        for(int i=l-1;i<r;i++){m[w[i]]; m[w[i]]++; }
        int max = m.begin()->second;
        char pos= m.begin()->first;
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second > max){pos=i->first; max=i->second;}
            if(i->second == max && pos>i->first){pos=i->first;}

        }
       cout<<pos<<endl;

        
    }

}