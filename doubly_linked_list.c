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
    ptr->data=n;
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
    p->data=n;
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
    int flag=1,n,y,i;
    while(flag){
    printf("\npls select the options below\n");
    printf("\n 1.insert at the begin\n 2.insert at the end\n 3.insert at the position\n 4.display\n 5.exit\n");
    scanf("%d",&y);
    switch (y)
    {
    case 1:
        printf("\nenter the value of the node\n");
        scanf("%d",&n);
        inbig(n);
        break;
    case 2:
        printf("enter the element to insert at the end");
        scanf("%d",&n);
        inend(n);
        break;
    case 3:
        printf("\npls enter the postion of the element\n");
        scanf("%d",&i);
        printf("\npls enter the value of the element to add\n");
        scanf("%d",&n);
        atpos(i,n);
        break;
    case 4:
        display();
        break;
    case 5:
        flag=0;
        break;
    default:
        printf("\nwrong choice pls select again\n");
        break;
    }
}
}
