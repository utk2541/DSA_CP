#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll k;
    cin >> k;
    string n;
    cin>>n;
map<ll,ll> prm;
map<ll,ll> prm2;
   prm[2]=-1; prm[3]=-1; prm[5]=-1;prm[7]=-1;
   prm2[2]=0; prm2[3]=0; prm2[5]=0;prm2[7]=0;
   ll nhp=0;
    for(ll i=0;i<k;i++){
        ll t= n[i]-'0';
        if(t!=2 && t!=3 && t!=5 && t!=7) {
            nhp=t;
            break;
        }
        else{
            prm[t]=i;
            prm2[t]++;
        }
    }
    if(nhp!=0) cout<<1<<endl<<nhp;
    else{
      
        ll chk2=0;
        for(auto f : prm2){
            if(f.second>1) {chk2=f.first; break;}
        }
        if(chk2!=0) cout<<2<<endl<<chk2*11;
        else{
            if(prm[2]<prm[5] && prm[2]!=-1) cout<<2<<endl<<25;
            else if(prm[2]<prm[7] && prm[2]!=-1) cout<<2<<endl<<27;
            else if(prm[3]<prm[2] && prm[3]!=-1) cout<<2<<endl<<32;
            else if(prm[3]<prm[5] && prm[3]!=-1) cout<<2<<endl<<35;
            else if(prm[5]<prm[2] && prm[5]!=-1) cout<<2<<endl<<52;
            else if(prm[5]<prm[7] && prm[5]!=-1) cout<<2<<endl<<57;
            else if(prm[7]<prm[2] && prm[7]!=-1) cout<<2<<endl<<72;
            else if(prm[7]<prm[5] && prm[7]!=-1) cout<<2<<endl<<75;

        }
        

    }
    cout << "\n";
}

int32_t main()
{
    ll t = 0;
    cin >> t;
    while (t--)
        solveCase();
}