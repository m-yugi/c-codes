#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL;
struct node* newnode1(int data){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
}
void insert(int data){
    if(root==NULL){
        root=newnode1(data);
    }
    else{
        struct node* ptr=root;
        struct node* temp=newnode1(data);
        while(ptr->left!=NULL && ptr->right!=NULL){
            if(data<=ptr->data){
                ptr=ptr->left;
            }
            else{
                ptr=ptr->right;
            }
        }
        if(data<=ptr->data){
            ptr->left=temp;
            printf("value entered left\n");
        }
        else{
            ptr->right=temp;
            printf("value entered right\n");
        }
    }
}
void search(int data){
    int flag=0;
    if(root==NULL){
        printf("tree is empty\n");
    }
    else{
            struct node* ptr=root;
            while (ptr!=NULL)
            {
                if (data<=ptr->data)
                {
                    printf("%d\n",ptr->data);
                    ptr=ptr->left;
                }
                else if(data>=ptr->data){
                    printf("%d\n",ptr->data);
                    ptr=ptr->right;
                }
                else{
                    flag=1;
                }
                
            }
        }
        if(flag){
            printf("value is in the tree\n");
        }
        else{
            printf("value is not in the tree\n");
        }
}
void print(struct node* root){
    if (root == NULL)
        return;
 
    /* first print data of node */
    printf("%d ", root->data);
 
    /* then recur on left subtree */
    print(root->left);
 
    /* now recur on right subtree */
    print(root->right);
}
void main(){
    int flag=1,u,n,s;
    while (flag)
    {
    printf("pls select the options below\n 1.insert\n 2.print\n 3.exit\n");
    scanf("%d",&u);
    switch(u){
        case 1:
        printf("pls enter the value to insert in tree\n");
        scanf("%d",&n);
        insert(n);
        break;
        case 2:
        print(root);
        break;
        case 3:
        flag=0;
        break;
        default:
        printf("pls enter a valid input\n");
        break;
    }
}
}