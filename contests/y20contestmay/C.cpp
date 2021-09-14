#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll a,b;
    cin>>a>>b;
    ll num=a+b;
    if(num%2==0){

        if(num/2==1)
        cout<<-1<<endl;
        else if((num/2)%2==0){
        if((num/2)-1 == a || (num/2)-1 == b )
        cout<<num-1<<" "<<1<<endl;
        else
        cout<<(num/2)-1<<" "<<(num/2)+1<<endl;}
        else{ 
            if((num/2)-2 == a || (num/2)-2 == b )
            cout<<(num-1)<<" "<<1<<endl;
            else
            cout<<(num/2)-2<<" "<<(num/2)+2<<endl;}
        
    }
    else{
        if(num/2==a || num/2 == b)
        cout<<num-1<<" "<<1<<endl;
        else
        cout<<num/2<<" "<<num-(num/2)<<endl;
    }
   
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}