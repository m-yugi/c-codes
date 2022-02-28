#include<stdio.h>
#include<stdlib.h>
struct tree{
int data;
struct tree* right;
struct tree*left;
};
struct tree* new_node(int data){
    struct tree* temp= (struct tree*)malloc(sizeof(struct tree));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void print(struct tree* root){
    if(root==NULL) return;
    // printf("i came here %d\n",root->data);
    print(root->left);
    printf("%d",root->data);
    print(root->right);
}
int main(){
    struct tree* root=new_node(1);
    root->left=new_node(2);
    root->right=new_node(3);
    root->left->left=new_node(4);
    root->left->right=new_node(5);
    root->right->left=new_node(6);
    root->right->right=new_node(7);
    // printf("%d",root->data);
    // printf("%d",root->left->data);
    // printf("%d",root->right->data);
    // printf("%d",root->left->right->data);
    // printf("%d",root->left->left->data);
    // printf("%d",root->right->left->data);
    // printf("%d",root->right->right->data);
    print(root);
}