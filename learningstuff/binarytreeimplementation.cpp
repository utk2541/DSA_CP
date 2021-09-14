#include<iostream>
struct node {
    int data;
    struct node *left;
    struct node *right;
    node(int dat){
        data=dat;
        left=NULL;
        right=NULL;

    }
};
int main(){
    struct node* root= new node(1);
    root->left= new node(2);
    root->right= new node(3);
    
}