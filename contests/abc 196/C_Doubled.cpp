#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n = 0;
    cin >> n;
    ll k=0;
    while(n>0 && k==0){
        string s=to_string(n);
        string m=s;
       
       
        if(s.length()%2!=0){
            n=(ll)pow(10,(s.length()-1));
        }
        if(s.length()%2==0 && m.substr(0,s.length()/2)==s.substr(s.length()/2,s.length()/2)){
            n=stoll(s.substr(0,s.length()/2));
            k=1;
            break;
        }
        else{
            n--;

        }
        
    }
    cout<<n;

    cout << "\n";
}

int32_t main()
{
    
        solveCase();
}