#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    string s;
    cin >> s;
    ll sum1=0,sum2=0;
    ll sum3=0,sum4=0;
    ll sum5=0,sum6=0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='0'){
            if(i%2==0)sum3++;
            else sum4++;}
        if(s[i]=='1'){
            if(i%2==0)sum5++;
            else sum6++;}
        
    }
    
    ll count=0;
    for(ll i=0;i<s.length();i++){
          count++;
        if(s[i]=='1'){
            if(i%2==0){sum1++; sum5--;}
            else {sum2++; sum6--;}
         
        }
        else if(s[i]=='0'){
            if(i%2==0)sum3--;
            else sum4--;
          
        }
        else if(s[i]=='?'){
            if(sum1>sum2){
                if(i%2==0){ sum1++;}
                //else cerr<<0;
            }
            else if(sum2>sum1){
                if(i%2!=0){ sum2++;}
               else cerr<<0;
               
            }
            else{if(sum1+sum5>sum2+sum6 && i%2==0) {sum1++; }
                else if(sum2+sum6>sum1+sum5 && i%2!=0){ sum2++; }
                else{
                 if(i%2==0) {sum1++;}
                

                if(i%2!=0 ){ sum2++;}
                }
            }
        }
        if(i%2==0){
            if(sum1-sum2>(10-(i))/2) break;
            if(sum2-sum1>(10-i-2)/2) break;
        }
        else{
            if(sum2-sum1>(10-i-1)/2) break;
            if(sum1-sum2>(10-i-1)/2) break;
        }
      //  cerr<<" ";
       
    }

    cout<<count;
   // cerr<<endl;
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}