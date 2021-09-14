#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    ll n;
    cin>>n;
    cin >> s;
    ll count=0;
    for(ll i=1;i<s.length()-1;i++){
        if(s[i]==s[i-1]){
            if(s[i]=='R' && s[i+1]=='B') {s[i]='G'; count++; }
            if(s[i]=='R' && s[i+1]=='G'){ s[i]='B';count++;}
            if(s[i]=='B' && s[i+1]=='R'){ s[i]='G';count++;}
            if(s[i]=='B' && s[i+1]=='G') {s[i]='R';count++;}
            if(s[i]=='G' && s[i+1]=='R'){ s[i]='B';count++;}
            if(s[i]=='G' && s[i+1]=='B'){ s[i]='R';count++;}
        }
    }
    if(s[n-1]==s[n-2]){
        
            if(s[n-1]=='R' ){ s[n-1]='B';count++;}
            if(s[n-1]=='B' ){ s[n-1]='G';count++;}
           
            if(s[n-1]=='G'){ s[n-1]='R';count++;}
    }
    cout<<count<<"\n"<<s;
    
    cout << "\n";
}

int32_t main()
{
    
    
        solveCase();
}