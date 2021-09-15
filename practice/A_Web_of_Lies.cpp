#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
int32_t mod = 1e9 + 7;

void solveCase()
{
    ll n ,m;
    cin >> n >>m;
    vector<set<ll>> adj(n);
    vector<ll> weaker(n,0), fri(n,0);
    for(ll i=0;i<m;i++){
        ll e1,e2;
        cin>>e1>>e2;
        e1--;
        e2--;
        
        fri[e1]++;
        fri[e2]++;
        if(e1>e2) weaker[e1]++;
        else weaker[e2]++; 
    }
    ll q;
    cin>>q;
    ll cnt=0;
            for(ll i=0;i<n;i++){
                if(weaker[i]==fri[i]) cnt++;
            }
    while(q--){
        
        ll q1;
        cin>>q1;
        if(q1==1){
            ll e1,e2;
            cin>>e1>>e2;
            e1--;
            e2--;
           
           
            fri[e1]++;
        fri[e2]++;
        if(e1>e2) {weaker[e1]++;  if((fri[e2]-1)==weaker[e2]) cnt--;  }
        else{ weaker[e2]++;  if((fri[e1]-1)==weaker[e1]) cnt--; }
        
        }
        else if(q1==2){
            ll e1,e2;
            cin>>e1>>e2;
            e1--;
            e2--;
            fri[e1]--;
        fri[e2]--;
        if(e1>e2) {weaker[e1]--;  if(fri[e2]==weaker[e2]) cnt++;  }
        else{ weaker[e2]--;  if(fri[e1]==weaker[e1]) cnt++; }

        }
        else if(q1==3){
            
            cout<<cnt<<endl;
        }
    }
    
    cout << "\n";
}

int32_t main()
{
        solveCase();
}