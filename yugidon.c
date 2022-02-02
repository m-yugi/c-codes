#include<stdio.h>
#include<stdlib.h>
#define count 10
struct node{
   int data;
    struct node* right;
    struct node* left;
};
struct node* newnode(int data){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void print(struct node *root,int space){
    if(root==NULL) return;
    space+=count;
    print(root->left,space);
        printf("\n");
    for(int i=count;i<space;i++){
        printf(" ");
    }
    printf("%d\n",root->data);
    print(root->right,space); 
}
int main(){
    struct node *root=newnode(1);
    root->left= newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    root->right->left=newnode(6);
    root->right->right=newnode(7);
    print(root,0);
}