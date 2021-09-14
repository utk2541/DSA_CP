#include<bits\stdc++.h>
int parent[1000]; 
void make_set(int v){
    parent[v]=v;
}
int find_set(int v){
    if(v == parent[v])
        return v;
   return parent[v] = find_set(parent[v]); // shortens path to representative for all nodes on the way
}
void union_sets(int a,int b){
    a = find_set(a);
    b= find_set(b);
    if(a!=b)
        parent[b]=a;
}
int main(){
    
}