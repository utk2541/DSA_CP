#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v = {1,2,3,4,5};
vector<int> v1(v);
vector<int>::iterator i;
i=v.begin();
cout<<*i<<endl;
i+=3;
cout<<*i;
cout<<endl; 
for(auto i1=v.begin();i1!=v.end();i1++)
  cout<<*i1<<" ";
v.insert(i,69);
cout<<endl;
for(auto i1=v.begin();i1!=v.end();i1++)
  cout<<*i1<<" ";
}