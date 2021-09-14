#include<iostream>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
        string a,b;
        cin>>a;
        for(int i=0;i<a.length();i++){
            if(a[i]=='A'|| a[i]=='O'|| a[i]=='Y'|| a[i]=='E'|| a[i]=='U'|| a[i]=='I'|| a[i]=='a'|| a[i]=='o'|| a[i]=='y'|| a[i]=='e'|| a[i]=='u'|| a[i]=='i')
             ;
            else{
                
                b.push_back('.');
                b.push_back(tolower(a[i]));
            }
        }
        cout<<b;
    return 0;
}
