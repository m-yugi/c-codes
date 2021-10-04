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
    ptr->next=head;
    head=ptr;
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
    int i,n,x;
    printf("enter the no of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter the data of the node\n");
        scanf("%d",&x);
        insertbig(x);
    }
    display();
}
