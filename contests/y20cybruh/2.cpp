#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

long long a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
long long b[n];
for(int i=0;i<n-1;i++){
    b[i]=a[i]+a[i+1];
}
b[n-1]=a[n-1];
for(int i=0;i<n;i++)
cout<<b[i]<<" ";

return 0;

}