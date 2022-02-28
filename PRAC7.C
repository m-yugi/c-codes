#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* new_node(int data){
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void print_reverse(struct node* head){
    if(head==NULL) return;
    print_reverse(head->next);
    printf("%d",head->data);
}
void print(struct node* head){
    if(head==NULL) return;
    printf("%d",head->data);
    print(head->next);
}
int main(){
    struct node* head=new_node(1);
    head->next=new_node(2);
    head->next->next=new_node(3);
    head->next->next->next=new_node(4);
    head->next->next->next->next= new_node(5);
    print(head);
    printf("\n");
    print_reverse(head);
}