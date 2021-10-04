#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void insertbig(int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    if(head==NULL){
        ptr->next=NULL;
        head=ptr;
    }
    else{
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    }
}
void end(int n){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    node->data=n;
    if(head==NULL){
        node->next=NULL;
        head=node;
    }
    else{
    struct Node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=node;
    node->next=NULL;
    }
}
void pos(int n,int pos){
	int i;
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr=head;
    for(i=0;i<pos-1;i++){
        ptr=ptr->next;
    }
    node->data=n;
    node->next=ptr->next;
    ptr->next=node;
}
void display(){
    struct Node* ptr=head;
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
void main(){
    head=NULL;
    int i,n,x,y;
    printf("enter the no of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the data of the node\n");
        scanf("%d",&x);
        //insertbig(x);
        end(x);
    }
    display();
    printf("enter the pos of the element\n");
    scanf("%d",&x);
    printf("enter the value of the element\n");
    scanf("%d",&y);
    pos(y,x);
    display();
}
