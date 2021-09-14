#include<bits\stdc++.h>
int parent[1000]; 
void make_set(int v){
    parent[v]=v;
}
int find_set(int v){
    if(v == parent[v])
        return v;
    else{
        find_set(parent[v]);
    }
}
void union_sets(int a,int b){
    a = find_set(a);
    b= find_set(b);
    if(a!=b)
        parent[b]=a;
}
int main(){
    
}