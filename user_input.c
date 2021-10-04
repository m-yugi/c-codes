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
    int n,x,y;
    printf("the linked list should have atleast two element before inserting at a position\n");
    printf("pls select the options\n");
    while(1){
    printf("1.insert at the begininning\n 2.insert at the end\n 3.insert at a position\n 4.display\n 5.exit\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    	printf("enter the value of the element\n");
    	scanf("%d",&n);
        insertbig(n);
        break;
    case 2:
    	printf("enter the value of the element\n");
    	scanf("%d",&n);
    	end(n);
    	break;
    case 3:
    	printf("enter the pos of the element\n");
    	scanf("%d",&n);
    	printf("enter the value of the element\n");
    	scanf("%d",&y);
    	pos(y,n);
    	break;
    case 4:
    	display();
    	break;
    case 5:
    	exit(0);
    	break;
    default:
    	printf("wrong choice");
        break;
    }
}
}
