#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* prev;
struct node* next;
};
struct node* head;
void inbig(int n){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=n;
    if(head==NULL){
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
        printf("\nnode had been added\n");
    }
    else{
        ptr->next=head;
        head->prev=ptr;
        ptr->prev=NULL;
        head=ptr;
        printf("\nnode had been added\n");
    }
}
void inend(int n){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    if(head==NULL){
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
        printf("\nnode had been added\n");
    }
    else{
        struct node* p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=ptr;
        ptr->prev=p;
        ptr->next=NULL;
        printf("\nnode had been added\n");
    }
}
void atpos(int pos,int n){
    struct node* ptr=head;
    int i;
    for(i=0;i<pos-1;i++){
        ptr=ptr->next;
    }
    struct node* p=(struct node*)malloc(sizeof(struct node));
    ptr->prev->next=p;
    p->prev=ptr->prev;
    p->next=ptr;
    ptr->prev=p;
    printf("\nnode had been added\n");
}
void display(){
	struct node* ptr=head;
    if(head==NULL){
        printf("\nlist is empty\n");
    }
    else{
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
    }
}
void main(){
    head=NULL;
    int flag=1,n;
    while(flag){
    printf("\nenter the value you want to insert in the list\n");
    scanf("%d",&n);
    if(n>=0){
    inbig(n);
    }
    else{
    flag=0;
    }
    }
    display();
}
