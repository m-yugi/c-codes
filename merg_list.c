#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* push(struct node* head,int n){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=n;
    if(head==NULL){
        ptr->next=NULL;
        head=ptr;
        printf("\nnode had been added to the big\n");
        return ptr;
    }
    else{
        ptr->next=head;
        head=ptr;
        printf("\nnode added\n");
        return ptr;
    }
}
struct node* merg(struct node* head,struct node* head1){
	struct node* ptr1=head;
	struct node* ptr2=head1;
	while(ptr1!=NULL){
        if(ptr1->data<=ptr2->data){
            
        }
    }
}
void display(struct node* head){
    struct node* ptr=head;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
void main(){
    struct node* head1=NULL;
    struct node* head2=NULL;
    head1=push(head1,1);
    head1=push(head1,2);
    head1=push(head1,4);
    display(head1);
    head2=push(head2,1);
    head2=push(head2,3);
    head2=push(head2,4);
    display(head2);
}
