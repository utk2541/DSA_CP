#include<bits\stdc++.h>
#define ll long long

ll t[4*1000];
using namespace std;
void build(ll a[],ll v,ll tl,ll tr){
    if(tl==tr){
        t[v]=a[tl];
    }
    else{
        ll tm= tl + (tr-tl)/2;
        build(a,2*v,tl,tm);
        build(a,2*v+1,tm+1,tr);
        t[v]=t[2*v]+t[2*v+1];
    }
}
ll sum(ll v, ll tl, ll tr,ll l,ll r){
    if(l>r) return 0;
    if(l==tl && r==tr) return t[v];
    ll tm= tl + (tr-tl)/2;
    return sum(2*v,tl,tm,l, min(tm,r))^sum(2*v+1,tm+1,tr,max(l,tm+1),r);
}
void update(ll v,ll tl,ll tr,ll pos,ll new_val){
    if(tl==tr){
        t[v]=new_val;
    }
    else{
        ll tm=tl + (tr-tl)/2;
        if(pos<=tm){
            update(v*2,tl,tm,pos,new_val);
        }
        else {
            update(2*v+1,tm+1,tr,pos,new_val);
        }
        t[v]=t[v*2]+t[2*v+1];
    }
}

int main(){

    return 0;
}