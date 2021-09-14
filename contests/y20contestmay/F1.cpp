#include <bits\stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;


int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = 0;
    cin >> n;
    string s;
    cin>>s;
    ll q;
    cin>>q;
    ll sum=0;
    ll b[n]={};
    for(ll i=0;i<n;i++){
                if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e') {
                    sum++;
                 
                }
                   b[i]=sum;
            }
   
        map<ll,ll> killme; 
    ll count=0,count1=0;
    while(q--){
        ll m,l,r,k;
        char c;
       
       
        cin>>m;
        if(m==1){cin>>l>>r;
             if(count1!=count){
            sum=0;
            for(ll i=l-1;i<n;i++){
                if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='e') {
                    sum++;
                 
                }
                   b[i]=sum;
               
            }
            
            count=count1;
        }
         
            if(l==1)cout<<b[r-1]<<endl;
            else
            cout<<b[r-1]-b[l-2]<<endl;
        }
        else if(m==2){
            cin>>k>>c;
            if((s[k-1]=='a' || s[k-1]=='i' || s[k-1]=='o' || s[k-1]=='u' || s[k-1]=='e') && (c=='a' || c=='i' || c=='o' || c=='u' || c=='e'));
        
            else if((s[k-1]=='a' || s[k-1]=='i' || s[k-1]=='o' || s[k-1]=='u' || s[k-1]=='e'))
            count1++;
            else if((c=='a' || c=='i' || c=='o' || c=='u' || c=='e'))
            count1++;
            
            s[k-1]=c;
            

        }

    }
    
       
       
}