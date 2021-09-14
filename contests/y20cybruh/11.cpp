#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> mno;
    mno.push_back(1);
    long long l;
    cin>>l;
    char c[l];
    scanf("%s",c);
    long long count=1;
    vector<int>::iterator it = mno.begin();
    for(long long i=0;i<l-1;i++){
       
       
        if(c[i]=='r') {it=mno.insert(++it,++count);  }

        if(c[i]=='l') {it=mno.insert(it,++count);  }
        
      




    }
    for(auto i=mno.begin();i!=mno.end();i++) cout<<*i<<" ";


}