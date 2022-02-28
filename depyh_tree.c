#include<stdio.h>
#include<stdlib.h>
#include "max_min.c"
struct node
{
    int data;
    struct node* right;
    struct node* left;
};
struct node* new(int data){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
}
void print(struct node* root){
    if(root==NULL) return;
    // printf("i came here %d\n",root->data);
    print(root->left);
    printf("%d\n",root->data);
    print(root->right);
}
int depth(struct node* root){
    if(root==NULL) return 0;
    return max(depth(root->left),depth(root->right))+1;
}
int main(){
    struct node* root=new(1);
    root->left=new(2);
    root->right=new(3);
    root->left->left=new(4);
    root->left->right=new(5);
    root->right->left=new(6);
    root->right->right=new(7);
    root->left->left->left=new(8);
    root->left->left->right=new(9);
    root->left->right->left=new(10);
    root->left->right->right=new(11);
    root->right->left->left=new(12);
    root->right->left->right=new(13);
    root->right->right->left=new(14);
    root->right->right->right=new(15);
    print(root);
    printf("this is depth %d ",depth(root));
}