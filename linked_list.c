#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void display(struct Node* head){
    struct Node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* two=(struct Node*)malloc(sizeof(struct Node));
    struct Node* three=(struct Node*)malloc(sizeof(struct Node));
    struct Node* four=(struct Node*)malloc(sizeof(struct Node));
    head->data=6;
    head->next=two;
    two->data=2;
    two->next=three;
    three->data=3;
    three->next=four;
    four->data=4;
    four->next=NULL;
    display(head);
}